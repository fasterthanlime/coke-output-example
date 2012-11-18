/* lang/types source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/types.h>
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

static lang_String__String* __strLit21;
static lang_String__String* __strLit20;
static lang_String__String* __strLit19;
static lang_String__String* __strLit18;

void lang_types__Object___defaults___impl(lang_types__Object* this) {
}

void lang_types__Object___destroy___impl(lang_types__Object* this) {
}

lang_types__Bool lang_types__Object_instanceOf__quest(lang_types__Object* this, lang_types__Class* T) {
    if (!this) {
        return false;
    }
    lang_types__Class* current = this->class;
    while (current) {
        if (current == T) {
            return true;
        }
        current = current->super;
    }
    return false;
}

void lang_types__Object___defaults__(lang_types__Object* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}

void lang_types__Object___destroy__(lang_types__Object* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__destroy__((lang_types__Object*)this);
}
void lang_types__Object___load__() {
    
}

lang_types__ObjectClass *lang_types__Object_class(){
    static lang_types__ObjectClass class = 
    {
        {
            .instanceSize = sizeof(lang_types__Object),
            .size = sizeof(void*)
        },
        .__defaults__ = (void*) lang_types__Object___defaults___impl,
        .__destroy__ = (void*) lang_types__Object___destroy___impl,
        .__load__ = (void*) lang_types__Object___load__,
    };
    return &class;
}

lang_types__Object* lang_types__Class_alloc__class(lang_types__Class* this) {
    lang_types__Object* object = ((lang_types__Object*) (lang_Memory__gc_malloc(this->instanceSize)));
    if (object) {
        object->class = this;
    }
    return object;
}

lang_types__Bool lang_types__Class_inheritsFrom__quest__class(lang_types__Class* this, lang_types__Class* T) {
    lang_types__Class* current = this;
    while (current) {
        if (current == T) {
            return true;
        }
        current = current->super;
    }
    return false;
}

void lang_types__Class___defaults___impl(lang_types__Class* this) {
    lang_types__Object___defaults___impl((lang_types__Object*) this);
}

void lang_types__Class___defaults__(lang_types__Class* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void lang_types__Class___load__() {
    lang_types__Object___load__();
}

lang_types__ClassClass *lang_types__Class_class(){
    static _Bool __done__ = false;
    static lang_types__ClassClass class = 
    {
        {
            {
                .instanceSize = sizeof(lang_types__Class),
                .size = sizeof(void*)
            },
            .__defaults__ = (void*) lang_types__Class___defaults___impl,
            .__destroy__ = (void*) lang_types__Object___destroy___impl,
            .__load__ = (void*) lang_types__Class___load__,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Class", 5);
    }
    return &class;
}
void lang_types__Array___load__() {
    lang_types__Class___load__();
}

lang_types__ArrayClass *lang_types__Array_class(){
    static _Bool __done__ = false;
    static lang_types__ArrayClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Array),
                    .size = sizeof(lang_types__Array)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__Array___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Array", 5);
    }
    return &class;
}

void lang_types__None_init(lang_types__None* this) {
}

void lang_types__None___defaults___impl(lang_types__None* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void lang_types__None___defaults__(lang_types__None* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_types__None* lang_types__None_new() {
    
    lang_types__None* this = ((lang_types__None*) (lang_types__Class_alloc__class((lang_types__Class*) lang_types__None_class())));
    lang_types__None___defaults__(this);
    lang_types__None_init((lang_types__None*) this);
    return this;
}
void lang_types__None___load__() {
    lang_types__Class___load__();
}

lang_types__NoneClass *lang_types__None_class(){
    static _Bool __done__ = false;
    static lang_types__NoneClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__None),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) lang_types__None___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__None___load__,
            },
        },
        .new = (void*) lang_types__None_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("None", 4);
    }
    return &class;
}
void lang_types__Void___load__() {
    lang_types__Class___load__();
}

lang_types__VoidClass *lang_types__Void_class(){
    static _Bool __done__ = false;
    static lang_types__VoidClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Void),
                    .size = sizeof(lang_types__Void)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__Void___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Void", 4);
    }
    return &class;
}

lang_String__String* lang_types__Pointer_toString(lang_types__Pointer this) {
    struct { 
        lang_types__Pointer __f1;
        lang_types__Pointer __f2;
    } ____va_args178 = { 
        lang_types__Pointer_class(), 
        this
    };
    lang_VarArgs__VarArgs ____va179 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args178), 
        NULL, 
        1
    };
    return lang_String__String_format((lang_String__String*) __strLit19, ____va179);
}
void lang_types__Pointer___load__() {
    lang_types__Class___load__();
}

lang_types__PointerClass *lang_types__Pointer_class(){
    static _Bool __done__ = false;
    static lang_types__PointerClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Pointer),
                    .size = sizeof(lang_types__Pointer)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__Pointer___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Pointer", 7);
    }
    return &class;
}

lang_String__String* lang_types__Bool_toString(lang_types__Bool this) {
    return this ? __strLit20 : __strLit21;
}
void lang_types__Bool___load__() {
    lang_types__Class___load__();
}

lang_types__BoolClass *lang_types__Bool_class(){
    static _Bool __done__ = false;
    static lang_types__BoolClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Bool),
                    .size = sizeof(lang_types__Bool)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__Bool___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Bool", 4);
    }
    return &class;
}

lang_Numbers__Int lang_types__Comparable_compareTo(Comparable__reference this, lang_types__Class* T, uint8_t* other) {
    return (lang_Numbers__Int) this.impl->compareTo(this.obj, T, other);
}

lang_types__ComparableClass *lang_types__Comparable_class(){
    static _Bool __done__ = false;
    static lang_types__ComparableClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Comparable),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__Class___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Comparable", 10);
    }
    return &class;
}
void lang_types__Closure___load__() {
    lang_types__Class___load__();
}

lang_types__ClosureClass *lang_types__Closure_class(){
    static _Bool __done__ = false;
    static lang_types__ClosureClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Closure),
                    .size = sizeof(lang_types__Closure)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__Closure___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Closure", 7);
    }
    return &class;
}

void lang_types__Cell_init(lang_types__Cell* this, uint8_t* val) {
    lang_Memory__memcpy(this->val, val, this->T->size);
}

void lang_types__Cell___defaults___impl(lang_types__Cell* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
    this->val = lang_Memory__gc_malloc(this->T->size);
}

void lang_types__Cell___defaults__(lang_types__Cell* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_types__Cell* lang_types__Cell_new(lang_types__Class* T, uint8_t* val) {
    
    lang_types__Cell* this = ((lang_types__Cell*) (lang_types__Class_alloc__class((lang_types__Class*) lang_types__Cell_class())));
    this->T = T;
    lang_types__Cell___defaults__(this);
    lang_types__Cell_init((lang_types__Cell*) this, (uint8_t*) val);
    return this;
}
void lang_types__Cell___load__() {
    lang_types__Class___load__();
}

lang_types__CellClass *lang_types__Cell_class(){
    static _Bool __done__ = false;
    static lang_types__CellClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Cell),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) lang_types__Cell___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__Cell___load__,
            },
        },
        .new = (void*) lang_types__Cell_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Cell", 4);
    }
    return &class;
}
void lang_types_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
        lang_BufferIterator_load();
        lang_System_load();
        lang_Character_load();
        lang_VarArgs_load();
        lang_Iterators_load();
        lang_Memory_load();
        lang_String_load();
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        lang_types__Object___load__();
        lang_types__Class___load__();
        lang_types__Array___load__();
        lang_types__None___load__();
        lang_types__Void___load__();
        lang_types__Pointer___load__();
        lang_types__Bool___load__();
        lang_types__Class___load__();
        lang_types__Closure___load__();
        lang_types__Cell___load__();
        __strLit21 = (void*) lang_String__makeStringLiteral("false", 5);
        __strLit20 = (void*) lang_String__makeStringLiteral("true", 4);
        __strLit19 = (void*) lang_String__makeStringLiteral("%p", 2);
        __strLit18 = (void*) lang_String__makeStringLiteral("Wants a %s, but got a %s", 24);
    }
}


void lang_types____OP_IDX_Cell_Class__T(uint8_t* __genericReturn17, lang_types__Cell* c, lang_types__Class* T) {
    if (!lang_types__Class_inheritsFrom__quest__class((lang_types__Class*) c->T, T)) {
        struct { 
            lang_types__Pointer __f1;
            lang_Character__CString __f2;
            lang_types__Pointer __f3;
            lang_Character__CString __f4;
        } ____va_args176 = { 
            lang_Character__CString_class(), 
            lang_String__String_toCString(T->name), 
            lang_Character__CString_class(), 
            lang_String__String_toCString(c->T->name)
        };
        lang_VarArgs__VarArgs ____va177 = (lang_VarArgs__VarArgs) { 
            (void*) &(____va_args176), 
            NULL, 
            2
        };
        lang_Exception__Exception_new((lang_types__Class*) (lang_types__Cell_class()), lang_String__String_format((lang_String__String*) __strLit18, ____va177));
    }
    if (__genericReturn17) {
        lang_Memory__memcpy(__genericReturn17, c->val, T->size);
    }
    return;
}
