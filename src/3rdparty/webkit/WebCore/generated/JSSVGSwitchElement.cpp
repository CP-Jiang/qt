/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGSwitchElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGStringList.h"
#include "SVGSwitchElement.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGSwitchElement);

/* Hash table */

static const HashTableValue JSSVGSwitchElementTableValues[12] =
{
    { "requiredFeatures", DontDelete|ReadOnly, (intptr_t)jsSVGSwitchElementRequiredFeatures, (intptr_t)0 },
    { "requiredExtensions", DontDelete|ReadOnly, (intptr_t)jsSVGSwitchElementRequiredExtensions, (intptr_t)0 },
    { "systemLanguage", DontDelete|ReadOnly, (intptr_t)jsSVGSwitchElementSystemLanguage, (intptr_t)0 },
    { "xmllang", DontDelete, (intptr_t)jsSVGSwitchElementXmllang, (intptr_t)setJSSVGSwitchElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)jsSVGSwitchElementXmlspace, (intptr_t)setJSSVGSwitchElementXmlspace },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGSwitchElementExternalResourcesRequired, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGSwitchElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGSwitchElementStyle, (intptr_t)0 },
    { "transform", DontDelete|ReadOnly, (intptr_t)jsSVGSwitchElementTransform, (intptr_t)0 },
    { "nearestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGSwitchElementNearestViewportElement, (intptr_t)0 },
    { "farthestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGSwitchElementFarthestViewportElement, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGSwitchElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSSVGSwitchElementTableValues, 0 };
#else
    { 33, 31, JSSVGSwitchElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGSwitchElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete|Function, (intptr_t)jsSVGSwitchElementPrototypeFunctionHasExtension, (intptr_t)1 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGSwitchElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { "getBBox", DontDelete|Function, (intptr_t)jsSVGSwitchElementPrototypeFunctionGetBBox, (intptr_t)0 },
    { "getCTM", DontDelete|Function, (intptr_t)jsSVGSwitchElementPrototypeFunctionGetCTM, (intptr_t)0 },
    { "getScreenCTM", DontDelete|Function, (intptr_t)jsSVGSwitchElementPrototypeFunctionGetScreenCTM, (intptr_t)0 },
    { "getTransformToElement", DontDelete|Function, (intptr_t)jsSVGSwitchElementPrototypeFunctionGetTransformToElement, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGSwitchElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 2047, JSSVGSwitchElementPrototypeTableValues, 0 };
#else
    { 17, 15, JSSVGSwitchElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGSwitchElementPrototype::s_info = { "SVGSwitchElementPrototype", 0, &JSSVGSwitchElementPrototypeTable, 0 };

JSObject* JSSVGSwitchElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGSwitchElement>(exec, globalObject);
}

bool JSSVGSwitchElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGSwitchElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGSwitchElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGSwitchElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGSwitchElement::s_info = { "SVGSwitchElement", &JSSVGElement::s_info, &JSSVGSwitchElementTable, 0 };

JSSVGSwitchElement::JSSVGSwitchElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGSwitchElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGSwitchElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGSwitchElementPrototype(JSSVGSwitchElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGSwitchElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGSwitchElement, Base>(exec, &JSSVGSwitchElementTable, this, propertyName, slot);
}

bool JSSVGSwitchElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGSwitchElement, Base>(exec, &JSSVGSwitchElementTable, this, propertyName, descriptor);
}

JSValue jsSVGSwitchElementRequiredFeatures(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredFeatures()), imp);
}

JSValue jsSVGSwitchElementRequiredExtensions(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredExtensions()), imp);
}

JSValue jsSVGSwitchElementSystemLanguage(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->systemLanguage()), imp);
}

JSValue jsSVGSwitchElementXmllang(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    return jsString(exec, imp->xmllang());
}

JSValue jsSVGSwitchElementXmlspace(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    return jsString(exec, imp->xmlspace());
}

JSValue jsSVGSwitchElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGSwitchElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGSwitchElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
}

JSValue jsSVGSwitchElementTransform(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGSwitchElementNearestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nearestViewportElement()));
}

JSValue jsSVGSwitchElementFarthestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGSwitchElement* castedThis = static_cast<JSSVGSwitchElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->farthestViewportElement()));
}

void JSSVGSwitchElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGSwitchElement, Base>(exec, propertyName, value, &JSSVGSwitchElementTable, this, slot);
}

void setJSSVGSwitchElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(static_cast<JSSVGSwitchElement*>(thisObject)->impl());
    imp->setXmllang(value.toString(exec));
}

void setJSSVGSwitchElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(static_cast<JSSVGSwitchElement*>(thisObject)->impl());
    imp->setXmlspace(value.toString(exec));
}

JSValue JSC_HOST_CALL jsSVGSwitchElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGSwitchElement::s_info))
        return throwError(exec, TypeError);
    JSSVGSwitchElement* castedThisObj = static_cast<JSSVGSwitchElement*>(asObject(thisValue));
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThisObj->impl());
    const UString& extension = args.at(0).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue JSC_HOST_CALL jsSVGSwitchElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGSwitchElement::s_info))
        return throwError(exec, TypeError);
    JSSVGSwitchElement* castedThisObj = static_cast<JSSVGSwitchElement*>(asObject(thisValue));
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValue JSC_HOST_CALL jsSVGSwitchElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGSwitchElement::s_info))
        return throwError(exec, TypeError);
    JSSVGSwitchElement* castedThisObj = static_cast<JSSVGSwitchElement*>(asObject(thisValue));
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), imp);
    return result;
}

JSValue JSC_HOST_CALL jsSVGSwitchElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGSwitchElement::s_info))
        return throwError(exec, TypeError);
    JSSVGSwitchElement* castedThisObj = static_cast<JSSVGSwitchElement*>(asObject(thisValue));
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getCTM()).get(), imp);
    return result;
}

JSValue JSC_HOST_CALL jsSVGSwitchElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGSwitchElement::s_info))
        return throwError(exec, TypeError);
    JSSVGSwitchElement* castedThisObj = static_cast<JSSVGSwitchElement*>(asObject(thisValue));
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getScreenCTM()).get(), imp);
    return result;
}

JSValue JSC_HOST_CALL jsSVGSwitchElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGSwitchElement::s_info))
        return throwError(exec, TypeError);
    JSSVGSwitchElement* castedThisObj = static_cast<JSSVGSwitchElement*>(asObject(thisValue));
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(0));


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getTransformToElement(element, ec)).get(), imp);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG)
