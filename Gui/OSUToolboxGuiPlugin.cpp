

#include "OSUToolboxGuiPlugin.h"

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
OSUToolboxGuiPlugin::OSUToolboxGuiPlugin()
: OSUToolboxPlugin()
{
}

// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
OSUToolboxGuiPlugin::~OSUToolboxGuiPlugin() = default;

#include "OSUToolbox/Gui/FilterParameterWidgets/RegisterKnownFilterParameterWidgets.cpp"
