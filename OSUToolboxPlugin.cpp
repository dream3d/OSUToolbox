/*
 * Your License or Copyright can go here
 */

#include "OSUToolboxPlugin.h"

#include <QtCore/QFile>
#include <QtCore/QFileInfo>
#include <QtCore/QTextStream>

#include "SIMPLib/Filtering/FilterManager.h"
#include "SIMPLib/Filtering/IFilterFactory.hpp"
#include "SIMPLib/Filtering/FilterFactory.hpp"

#include "OSUToolbox/OSUToolboxConstants.h"


// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
OSUToolboxPlugin::OSUToolboxPlugin() :
m_Version("0.1.0"),                            // Initialize OSUToolbox's Version Number Here
m_CompatibilityVersion("0.1.0"), // Initialize OSUToolbox's Compatibility Version Number Here
m_Vendor("Vendor Name"),                                // Initialize OSUToolbox's Vendor Name Here
m_URL("URL"),                                           // Initialize Company URL Here
m_Location("Location"),                                 // Initialize OSUToolbox library Location Here
m_Description("Description"),                           // Initialize OSUToolbox's Description Here
m_Copyright("Copyright"),                               // Initialize OSUToolbox's Copyright Here
m_Filters(QList<QString>()),                        // Initialize OSUToolbox's List of Dependencies Here
m_DidLoad(false)
{

}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
OSUToolboxPlugin::~OSUToolboxPlugin() = default;

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getPluginFileName()
{
  return OSUToolboxConstants::OSUToolboxPluginFile;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getPluginDisplayName()
{
  return OSUToolboxConstants::OSUToolboxPluginDisplayName;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getPluginBaseName()
{
  return OSUToolboxConstants::OSUToolboxBaseName;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getVersion()
{
  return m_Version;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getCompatibilityVersion()
{
  return m_CompatibilityVersion;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getVendor()
{
  return m_Vendor;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getURL()
{
  return m_URL;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getLocation()
{
  return m_Location;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getDescription()
{
  /* PLEASE UPDATE YOUR PLUGIN'S DESCRIPTION FILE.
  It is located at OSUToolbox/Resources/OSUToolbox/OSUToolboxDescription.txt */

  QFile licenseFile(":/OSUToolbox/OSUToolboxDescription.txt");
  QFileInfo licenseFileInfo(licenseFile);
  QString text = "<<--Description was not read-->>";

  if ( licenseFileInfo.exists() )
  {
    if ( licenseFile.open(QIODevice::ReadOnly | QIODevice::Text) )
    {
      QTextStream in(&licenseFile);
      text = in.readAll();
    }
  }
  return text;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getCopyright()
{
  return m_Copyright;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QString OSUToolboxPlugin::getLicense()
{
  /* PLEASE UPDATE YOUR PLUGIN'S LICENSE FILE.
  It is located at OSUToolbox/Resources/OSUToolbox/OSUToolboxLicense.txt */

  QFile licenseFile(":/OSUToolbox/OSUToolboxLicense.txt");
  QFileInfo licenseFileInfo(licenseFile);
  QString text = "<<--License was not read-->>";

  if ( licenseFileInfo.exists() )
  {
    if ( licenseFile.open(QIODevice::ReadOnly | QIODevice::Text) )
    {
      QTextStream in(&licenseFile);
      text = in.readAll();
    }
  }
  return text;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
QMap<QString, QString> OSUToolboxPlugin::getThirdPartyLicenses()
{
  QMap<QString, QString> licenseMap;
  QList<QString> fileStrList;

  for(const auto& item : fileStrList)
  {
    QFile file(item);
    QFileInfo licenseFileInfo(file);

    if ( licenseFileInfo.exists() )
    {
      if ( file.open(QIODevice::ReadOnly | QIODevice::Text) )
      {
        QTextStream in(&file);
        licenseMap.insert(licenseFileInfo.baseName(), in.readAll());
      }
    }
  }

  return licenseMap;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
bool OSUToolboxPlugin::getDidLoad()
{
  return m_DidLoad;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void OSUToolboxPlugin::setDidLoad(bool didLoad)
{
  m_DidLoad = didLoad;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void OSUToolboxPlugin::setLocation(QString filePath)
{
  m_Location = filePath;
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void OSUToolboxPlugin::writeSettings(QSettings& prefs)
{
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void OSUToolboxPlugin::readSettings(QSettings& prefs)
{
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
void OSUToolboxPlugin::registerFilterWidgets(FilterWidgetManager* fwm)
{
}

#include "OSUToolboxFilters/RegisterKnownFilters.cpp"


