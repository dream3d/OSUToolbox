/*
 * Your License or Copyright can go here
 */

#include "OSUToolboxFilter.h"

#include <QtCore/QTextStream>

#include "SIMPLib/Common/Constants.h"



#include "OSUToolbox/OSUToolboxConstants.h"
#include "OSUToolbox/OSUToolboxVersion.h"


// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
OSUToolboxFilter::OSUToolboxFilter() 
{
  initialize();
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
OSUToolboxFilter::~OSUToolboxFilter() = default;

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void OSUToolboxFilter::initialize()
{
  clearErrorCode();
  clearWarningCode();
  setCancel(false);
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void OSUToolboxFilter::setupFilterParameters()
{
  FilterParameterVectorType parameters;

  setFilterParameters(parameters);
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void OSUToolboxFilter::dataCheck()
{
  clearErrorCode();
  clearWarningCode();
  
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void OSUToolboxFilter::execute()
{
  initialize();
  dataCheck();
  if(getErrorCode() < 0) { return; }

  if (getCancel()) { return; }

  if (getWarningCode() < 0)
  {
    QString ss = QObject::tr("Some warning message");
    setWarningCondition(-88888888, ss);
  }

  if (getErrorCode() < 0)
  {
    QString ss = QObject::tr("Some error message");
    setErrorCondition(-99999999, ss);
    return;
  }

}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
AbstractFilter::Pointer OSUToolboxFilter::newFilterInstance(bool copyFilterParameters) const
{
  OSUToolboxFilter::Pointer filter = OSUToolboxFilter::New();
  if(copyFilterParameters)
  {
    copyFilterParameterInstanceVariables(filter.get());
  }
  return filter;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxFilter::getCompiledLibraryName() const
{ 
  return OSUToolboxConstants::OSUToolboxBaseName;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxFilter::getBrandingString() const
{
  return "OSUToolbox";
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxFilter::getFilterVersion() const
{
  QString version;
  QTextStream vStream(&version);
  vStream <<  OSUToolbox::Version::Major() << "." << OSUToolbox::Version::Minor() << "." << OSUToolbox::Version::Patch();
  return version;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxFilter::getGroupName() const
{ 
  return SIMPL::FilterGroups::Unsupported; 
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxFilter::getSubGroupName() const
{ 
  return "OSUToolbox"; 
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxFilter::getHumanLabel() const
{ 
  return "OSUToolboxFilter"; 
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QUuid OSUToolboxFilter::getUuid() const
{
  return QUuid("{37fb4025-f40d-5ef7-bff4-8bec274316e3}");
}

// -----------------------------------------------------------------------------
OSUToolboxFilter::Pointer OSUToolboxFilter::NullPointer()
{
  return Pointer(static_cast<Self*>(nullptr));
}

// -----------------------------------------------------------------------------
std::shared_ptr<OSUToolboxFilter> OSUToolboxFilter::New()
{
  struct make_shared_enabler : public OSUToolboxFilter
  {
  };
  std::shared_ptr<make_shared_enabler> val = std::make_shared<make_shared_enabler>();
  val->setupFilterParameters();
  return val;
}

// -----------------------------------------------------------------------------
QString OSUToolboxFilter::getNameOfClass() const
{
  return QString("OSUToolboxFilter");
}

// -----------------------------------------------------------------------------
QString OSUToolboxFilter::ClassName()
{
  return QString("OSUToolboxFilter");
}




