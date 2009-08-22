#ifndef MARK_2DCAC914_635D_4D58_AA60_DC75CD13961F
#define MARK_2DCAC914_635D_4D58_AA60_DC75CD13961F

#include <stdarg.h>
#include <stdio.h>

#define lua_c
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

enum {
    qReal,
    qString,
    qComplex,
    qVecInt,
    qVecDouble,
    qVecComplex,
    /* add types for other packages here */
    qOther
};

extern const char *progname;
extern const char *qcdlib;
extern const char *mtnComplex;
extern const char *mtnVecInt;
extern const char *mtnVecDouble;
extern const char *mtnVecComplex;

void qlua_metatable(lua_State *L, const char *name, const luaL_Reg *table);
void qlua_init(lua_State *L);
int qlua_gettype(lua_State *L, int idx);

/* additions */
int qlua_add(lua_State *L);
int q_r_add_c(lua_State *L);
int q_c_add_r(lua_State *L);
int q_c_add_c(lua_State *L);
/* add other packages here */

/* subtractions */
int qlua_sub(lua_State *L);
int q_r_sub_c(lua_State *L);
int q_c_sub_r(lua_State *L);
int q_c_sub_c(lua_State *L);
/* add other packages here */

/* multiplications */
int qlua_mul(lua_State *L);
int q_r_mul_c(lua_State *L);
int q_c_mul_r(lua_State *L);
int q_c_mul_c(lua_State *L);
/* add other packages here */

/* divisions */
int qlua_div(lua_State *L);
int q_r_div_c(lua_State *L);
int q_c_div_r(lua_State *L);
int q_c_div_c(lua_State *L);
/* add other packages here */

#endif /* !defined(MARK_2DCAC914_635D_4D58_AA60_DC75CD13961F) */
