/* math/Random source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/math/Random.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>
#include <sdk/os/Time.h>
#include <sdk/structs/ArrayList.h>
#include <sdk/structs/List.h>


void math_Random__Random_init(math_Random__Random* this) {
}

void math_Random__Random___defaults___impl(math_Random__Random* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void math_Random__Random___defaults__(math_Random__Random* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
math_Random__Random* math_Random__Random_new() {
    
    math_Random__Random* this = ((math_Random__Random*) (lang_types__Class_alloc__class((lang_types__Class*) math_Random__Random_class())));
    math_Random__Random___defaults__(this);
    math_Random__Random_init((math_Random__Random*) this);
    return this;
}
lang_Numbers__Int math_Random__Random_random() {
    
    return math_Random__rand();
}
lang_Numbers__Int math_Random__Random_randInt(lang_Numbers__Int start, lang_Numbers__Int end) {
    
    return math_Random__Random_randRange(start, end + 1);
}
lang_Numbers__Int math_Random__Random_randInt_exclude(lang_Numbers__Int start, lang_Numbers__Int end, structs_List__List* ex) {
    
    return math_Random__Random_exclude(start, end, ex, (lang_types__Closure) { 
        math_Random__Random_randInt, 
        NULL
    });
}
lang_Numbers__Int math_Random__Random_randRange(lang_Numbers__Int start, lang_Numbers__Int end) {
    
    lang_Numbers__Int width = end - start;
    return start + (math_Random__Random_random() % width);
}
lang_Numbers__Int math_Random__Random_randRange_exclude(lang_Numbers__Int start, lang_Numbers__Int end, structs_List__List* ex) {
    
    return math_Random__Random_exclude(start, end, ex, (lang_types__Closure) { 
        math_Random__Random_randRange, 
        NULL
    });
}
void math_Random__Random_choice(uint8_t* __genericReturn80, lang_types__Class* T, structs_List__List* l) {
    
    structs_List__List_get(l, __genericReturn80, math_Random__Random_randRange(0, structs_List__List_getSize(l)));
    return;
}
lang_Numbers__Int math_Random__Random_exclude(lang_Numbers__Int start, lang_Numbers__Int end, structs_List__List* ex, lang_types__Closure f) {
    
    lang_Numbers__Int toRet = ((lang_Numbers__Int (*)(lang_Numbers__Int, lang_Numbers__Int, void*)) f.thunk)(start, end, f.context);
    while (structs_List__List_contains__quest(ex, (uint8_t*) &(toRet))) {
        toRet = ((lang_Numbers__Int (*)(lang_Numbers__Int, lang_Numbers__Int, void*)) f.thunk)(start, end, f.context);
    }
    return toRet;
}
lang_Numbers__Int math_Random__Random_fastRandom() {
    
    math_Random__Random_class()->state = (lang_Numbers__LLong) 214013 * math_Random__Random_class()->state + 2531011;
    return ((lang_Numbers__Int) ((math_Random__Random_class()->state >> 16) & 32767));
}
lang_Numbers__Int math_Random__Random_fastRandInt(lang_Numbers__Int start, lang_Numbers__Int end) {
    
    return math_Random__Random_fastRandRange(start, end + 1);
}
lang_Numbers__Int math_Random__Random_fastRandInt_exclude(lang_Numbers__Int start, lang_Numbers__Int end, structs_List__List* ex) {
    
    return math_Random__Random_exclude(start, end, ex, (lang_types__Closure) { 
        math_Random__Random_fastRandInt, 
        NULL
    });
}
lang_Numbers__Int math_Random__Random_fastRandRange(lang_Numbers__Int start, lang_Numbers__Int end) {
    
    lang_Numbers__Int width = end - start;
    return start + (math_Random__Random_fastRandom() % width);
}
lang_Numbers__Int math_Random__Random_fastRandRange_exclude(lang_Numbers__Int start, lang_Numbers__Int end, structs_List__List* ex) {
    
    return math_Random__Random_exclude(start, end, ex, (lang_types__Closure) { 
        math_Random__Random_fastRandRange, 
        NULL
    });
}
void math_Random__Random___load__() {
    lang_types__Class___load__();
    math_Random__Random_class()->state = os_Time__Time_microtime();
}

math_Random__RandomClass *math_Random__Random_class(){
    static _Bool __done__ = false;
    static math_Random__RandomClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(math_Random__Random),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) math_Random__Random___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) math_Random__Random___load__,
            },
        },
        .new = (void*) math_Random__Random_new,
        .random = (void*) math_Random__Random_random,
        .randInt = (void*) math_Random__Random_randInt,
        .randInt_exclude = (void*) math_Random__Random_randInt_exclude,
        .randRange = (void*) math_Random__Random_randRange,
        .randRange_exclude = (void*) math_Random__Random_randRange_exclude,
        .choice = (void*) math_Random__Random_choice,
        .exclude = (void*) math_Random__Random_exclude,
        .fastRandom = (void*) math_Random__Random_fastRandom,
        .fastRandInt = (void*) math_Random__Random_fastRandInt,
        .fastRandInt_exclude = (void*) math_Random__Random_fastRandInt_exclude,
        .fastRandRange = (void*) math_Random__Random_fastRandRange,
        .fastRandRange_exclude = (void*) math_Random__Random_fastRandRange_exclude,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Random", 6);
    }
    return &class;
}
void math_Random_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
        lang_BufferIterator_load();
        lang_System_load();
        lang_Character_load();
        lang_VarArgs_load();
        lang_types_load();
        lang_Iterators_load();
        lang_Memory_load();
        lang_String_load();
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        os_Time_load();
        structs_ArrayList_load();
        structs_List_load();
        math_Random__Random___load__();
        math_Random__srand(os_Time__Time_microtime());
    }
}

