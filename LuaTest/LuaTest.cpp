// LuaTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<lua.hpp>

int main()
{
    lua_State* lua = luaL_newstate();
    luaL_openlibs(lua);
    luaL_dofile(lua, "Test.lua");
    lua_close(lua);
}
