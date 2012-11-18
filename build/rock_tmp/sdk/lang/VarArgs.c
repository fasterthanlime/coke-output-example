/* lang/VarArgs source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>

static lang_String__String* __strLit15;
static lang_String__String* __strLit14;

void lang_VarArgs__VarArgs_each(lang_VarArgs__VarArgs this, lang_types__Closure f) {
    lang_Numbers__SSizeT countdown = this.count;
    lang_Numbers__UInt8* argsPtr = this.args;
    while (countdown > 0) {
        countdown -= 1;
        lang_types__Class* type = ((lang_types__Class*) ((*((((lang_types__Class**) (argsPtr)))))));
        
        #if !(defined(__WIN32__) || defined(__WIN64__))
        argsPtr += ((lang_types__Class*)lang_types__Class_class())->size;
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        if (type->size < ((lang_types__Class*)lang_types__Class_class())->size) {
            argsPtr += ((lang_types__Class*)lang_types__Class_class())->size;
        }
        else {
            argsPtr += type->size;
        }
        #endif
        lang_VarArgs____va_call(f, type, (uint8_t*) argsPtr);
        argsPtr += lang_VarArgs____pointer_align(type->size);
    }
}

void lang_VarArgs__VarArgs_init(lang_VarArgs__VarArgs* this, lang_Numbers__SSizeT count, lang_Numbers__SizeT bytes) {
    (*this).count = count;
    (*this).args = (void*) lang_Memory__gc_malloc(bytes + (count * ((lang_types__Class*)lang_types__Class_class())->size));
    (*this).argsPtr = (*this).args;
}

void lang_VarArgs__VarArgs__addValue(lang_VarArgs__VarArgs* this, lang_types__Class* T, uint8_t* value) {
    (*((((lang_types__Class**) ((*this).argsPtr))))) = T;
    (*this).argsPtr += ((lang_types__Class*)lang_types__Class_class())->size;
    lang_Memory__memcpy((((uint8_t*) ((*this).argsPtr))), value, T->size);
    (*this).argsPtr += lang_VarArgs____pointer_align(T->size);
}

lang_VarArgs__VarArgsIterator lang_VarArgs__VarArgs_iterator(lang_VarArgs__VarArgs this) {
    return (lang_VarArgs__VarArgsIterator) { 
        this.args, 
        this.count, 
        true
    };
}
lang_VarArgs__VarArgs lang_VarArgs__VarArgs_new(lang_Numbers__SSizeT count, lang_Numbers__SizeT bytes) {
    
    lang_VarArgs__VarArgs this;
    lang_VarArgs__VarArgs_init(&(this), count, bytes);
    return this;
}
void lang_VarArgs__VarArgs___load__() {
    lang_types__Class___load__();
}

lang_VarArgs__VarArgsClass *lang_VarArgs__VarArgs_class(){
    static _Bool __done__ = false;
    static lang_VarArgs__VarArgsClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_VarArgs__VarArgs),
                    .size = sizeof(lang_VarArgs__VarArgs)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_VarArgs__VarArgs___load__,
            },
        },
        .new = (void*) lang_VarArgs__VarArgs_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("VarArgs", 7);
    }
    return &class;
}

lang_types__Bool lang_VarArgs__VarArgsIterator_hasNext__quest(lang_VarArgs__VarArgsIterator this) {
    return this.countdown >= 0;
}

void lang_VarArgs__VarArgsIterator_next(lang_VarArgs__VarArgsIterator* this, uint8_t* __genericReturn13, lang_types__Class* T) {
    if ((*this).countdown < 0) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (lang_VarArgs__VarArgsIterator_class()), __strLit14));
    }
    (*this).countdown -= 1;
    lang_types__Class* nextType = ((lang_types__Class*) ((*((((lang_types__Class**) ((*this).argsPtr)))))));
    uint8_t* result;
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    result = ((uint8_t*) (((*this).argsPtr + ((lang_types__Class*)lang_types__Class_class())->size)));
    (*this).argsPtr += ((lang_types__Class*)lang_types__Class_class())->size + lang_VarArgs____pointer_align(nextType->size);
    #endif
    
    #if defined(__WIN32__) || defined(__WIN64__)
    if (nextType->size > ((lang_types__Class*)lang_types__Class_class())->size) {
        result = ((uint8_t*) (((*this).argsPtr + nextType->size)));
        (*this).argsPtr += nextType->size + lang_VarArgs____pointer_align(nextType->size);
    }
    else {
        result = ((uint8_t*) (((*this).argsPtr + ((lang_types__Class*)lang_types__Class_class())->size)));
        (*this).argsPtr += ((lang_types__Class*)lang_types__Class_class())->size + lang_VarArgs____pointer_align(nextType->size);
    }
    #endif
    uint8_t* __returnVal16 = lang_Memory__gc_malloc(T->size);
    lang_Memory__memcpy(__returnVal16, result, T->size);
    if (__genericReturn13) {
        lang_Memory__memcpy(__genericReturn13, __returnVal16, T->size);
    }
    return;
}

lang_types__Class* lang_VarArgs__VarArgsIterator_getNextType(lang_VarArgs__VarArgsIterator* this) {
    if ((*this).countdown < 0) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (lang_VarArgs__VarArgsIterator_class()), __strLit15));
    }
    return ((lang_types__Class*) ((*((((lang_types__Class**) ((*this).argsPtr)))))));
}
void lang_VarArgs__VarArgsIterator___load__() {
    lang_types__Class___load__();
}

lang_VarArgs__VarArgsIteratorClass *lang_VarArgs__VarArgsIterator_class(){
    static _Bool __done__ = false;
    static lang_VarArgs__VarArgsIteratorClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_VarArgs__VarArgsIterator),
                    .size = sizeof(lang_VarArgs__VarArgsIterator)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_VarArgs__VarArgsIterator___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("VarArgsIterator", 15);
    }
    return &class;
}
void lang_VarArgs_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
        lang_BufferIterator_load();
        lang_System_load();
        lang_Character_load();
        lang_types_load();
        lang_Iterators_load();
        lang_Memory_load();
        lang_String_load();
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        lang_VarArgs__VarArgs___load__();
        lang_VarArgs__VarArgsIterator___load__();
        __strLit15 = (void*) lang_String__makeStringLiteral("Vararg underflow!", 17);
        __strLit14 = (void*) lang_String__makeStringLiteral("Vararg underflow!", 17);
    }
}


void lang_VarArgs____va_call(lang_types__Closure f, lang_types__Class* T, uint8_t* arg) {
    ((void (*)(lang_types__Class*, uint8_t*, void*)) f.thunk)((lang_types__Class*)T, (uint8_t*) arg, f.context);
}

lang_Numbers__SizeT lang_VarArgs____pointer_align(lang_Numbers__SizeT s) {
    static lang_Numbers__SizeT ps = lang_VarArgs____sizeof((lang_types__Class*) (lang_types__Pointer_class()));
    lang_Numbers__SizeT diff = s % ps;
    return diff ? s + (ps - diff) : s;
}
