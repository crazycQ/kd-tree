/* 
* @Author: BlahGeek
* @Date:   2015-01-10
* @Last Modified by:   BlahGeek
* @Last Modified time: 2015-01-21
*/

#ifndef __hp_unit_types_h__
#define __hp_unit_types_h__ value

#ifdef __APPLE__
#include <OPENCL/opencl.h>
#else
#include <CL/cl.h>
#endif

namespace hp{

typedef struct {
    cl_int orig_id;
    cl_float3 strength;
    cl_float3 start_p, in_dir;
    cl_int4 geometry;
    cl_float intersect_number;
    cl_float3 intersect_p, normal;
    cl_float optical_density;
    cl_float shininess;
} unit_data;

typedef struct {
    cl_float3 emission;
    cl_float3 ambient;
    cl_float3 diffuse;
    cl_float3 specular;
    cl_float optical_density;
    cl_float dissolve;
    cl_float shininess;

    cl_int diffuse_texture_id;
    cl_int ambient_texture_id;

    cl_float specular_possibility;
    cl_float refract_possibility;
    cl_float diffuse_possibility;
} Material;

typedef struct {
    cl_float3 box_start;
    cl_float3 box_end;
    cl_int child; // first child, -1 for null
    cl_int parent;
    cl_int sibling;
    cl_int data;
} KDTreeNodeHeader;

}


#endif
