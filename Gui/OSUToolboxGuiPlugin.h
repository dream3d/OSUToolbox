#pragma once

#include "OSUToolbox/OSUToolboxPlugin.h"

class OSUToolboxGuiPlugin : public OSUToolboxPlugin
{
  Q_OBJECT
  Q_INTERFACES(ISIMPLibPlugin)
  Q_PLUGIN_METADATA(IID "com.your.domain.OSUToolboxGuiPlugin")

public:
  OSUToolboxGuiPlugin();
  ~OSUToolboxGuiPlugin() override;
  
  /**
   * @brief Register all the filters with the FilterWidgetFactory
   */
  void registerFilterWidgets(FilterWidgetManager* fwm) override;

public:
  OSUToolboxGuiPlugin(const OSUToolboxGuiPlugin&) = delete;            // Copy Constructor Not Implemented
  OSUToolboxGuiPlugin(OSUToolboxGuiPlugin&&) = delete;                 // Move Constructor
  OSUToolboxGuiPlugin& operator=(const OSUToolboxGuiPlugin&) = delete; // Copy Assignment Not Implemented
  OSUToolboxGuiPlugin& operator=(OSUToolboxGuiPlugin&&) = delete;      // Move Assignment Not Implemented
};
