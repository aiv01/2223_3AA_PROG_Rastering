#pragma once

typedef struct {
    int x;
    int y;
} vector2_t;

typedef struct {
    float x;
    float y;
} vector2f_t;


typedef struct {
    float x;
    float y;
    float z;
} vector3f_t;

vector3f_t vector3f_sub(vector3f_t* v1, vector3f_t* v2);

vector3f_t vector3f_rotate_y(vector3f_t* v, float degrees);

vector3f_t vector3f_mult(vector3f_t* v, float scalar);

vector3f_t vector3f_norm(vector3f_t* v);

float vector3f_magn(vector3f_t* v);

float vector3f_dot(vector3f_t* v1, vector3f_t* v2);