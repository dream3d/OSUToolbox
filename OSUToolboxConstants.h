/*
 * Your License should go here
 */
#ifndef _osutoolboxconstants_h_
#define _osutoolboxconstants_h_

#include <QtCore/QString>

/**
* @brief This namespace is used to define some Constants for the plugin itself.
*/
namespace OSUToolboxConstants
{
  const QString OSUToolboxPluginFile("OSUToolboxPlugin");
  const QString OSUToolboxPluginDisplayName("OSUToolbox");
  const QString OSUToolboxBaseName("OSUToolbox");

  namespace FilterGroups
  {
  	const QString OSUToolboxFilters("OSUToolbox");
  }
}

/**
* @brief Use this namespace to define any custom GUI widgets that collect FilterParameters
* for a filter. Do NOT define general reusable widgets here.
*/
namespace FilterParameterWidgetType
{
/* const QString SomeCustomWidget("SomeCustomWidget"); */
}
#endif
