/*
 * Your License or Copyright can go here
 */

#pragma once

#include "SIMPLib/SIMPLib.h"
#include "SIMPLib/Filtering/AbstractFilter.h"


#include "OSUToolbox/OSUToolboxPlugin.h"
    
/**
 * @brief The OSUToolboxFilter class. See [Filter documentation](@ref osutoolboxfilter) for details.
 */
class OSUToolbox_EXPORT OSUToolboxFilter : public AbstractFilter
{
  Q_OBJECT

  // clang-format off
  PYB11_BEGIN_BINDINGS(OSUToolboxFilter SUPERCLASS AbstractFilter)
  PYB11_FILTER()
  PYB11_SHARED_POINTERS(OSUToolboxFilter)
  PYB11_FILTER_NEW_MACRO(OSUToolboxFilter)
  
  PYB11_END_BINDINGS()
  // clang-format on

public:

  using Self = OSUToolboxFilter;
  using Pointer = std::shared_ptr<Self>;
  using ConstPointer = std::shared_ptr<const Self>;
  using WeakPointer = std::weak_ptr<Self>;
  using ConstWeakPointer = std::weak_ptr<const Self>;
  static Pointer NullPointer();

  static Pointer New();

  /**
   * @brief Returns the name of the class for OSUToolboxFilter
   */
  QString getNameOfClass() const override;

  /**
   * @brief Returns the name of the class for OSUToolboxFilter
   */
  static QString ClassName();

  ~OSUToolboxFilter() override;
  


  /**
   * @brief getCompiledLibraryName Reimplemented from @see AbstractFilter class
   */
  QString getCompiledLibraryName() const override;

  /**
   * @brief getBrandingString Returns the branding string for the filter, which is a tag
   * used to denote the filter's association with specific plugins
   * @return Branding string
   */
  QString getBrandingString() const override;

  /**
   * @brief getFilterVersion Returns a version string for this filter. Default
   * value is an empty string.
   * @return
   */
  QString getFilterVersion() const override;

  /**
   * @brief newFilterInstance Reimplemented from @see AbstractFilter class
   */
  AbstractFilter::Pointer newFilterInstance(bool copyFilterParameters) const override;

  /**
   * @brief getGroupName Reimplemented from @see AbstractFilter class
   */
  QString getGroupName() const override;

  /**
   * @brief getSubGroupName Reimplemented from @see AbstractFilter class
   */
  QString getSubGroupName() const override;

  /**
   * @brief getUuid Return the unique identifier for this filter.
   * @return A QUuid object.
   */
  QUuid getUuid() const override;

  /**
   * @brief getHumanLabel Reimplemented from @see AbstractFilter class
   */
  QString getHumanLabel() const override;

  /**
   * @brief setupFilterParameters Reimplemented from @see AbstractFilter class
   */
  void setupFilterParameters() override;

  /**
   * @brief execute Reimplemented from @see AbstractFilter class
   */
  void execute() override;

protected:
  OSUToolboxFilter();

  /**
   * @brief dataCheck Checks for the appropriate parameter values and availability of arrays
   */
  void dataCheck() override;

  /**
   * @brief Initializes all the private instance variables.
   */
  void initialize();

private: 


public:
  OSUToolboxFilter(const OSUToolboxFilter&) = delete;            // Copy Constructor Not Implemented
  OSUToolboxFilter& operator=(const OSUToolboxFilter&) = delete; // Copy Assignment Not Implemented
  OSUToolboxFilter(OSUToolboxFilter &&) = delete;                // Move Constructor Not Implemented
  OSUToolboxFilter& operator=(OSUToolboxFilter&&) = delete;      // Move Assignment Not Implemented
};

