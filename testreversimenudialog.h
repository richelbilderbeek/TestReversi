#ifndef TESTREVERSIMENUDIALOG_H
#define TESTREVERSIMENUDIALOG_H

#include <string>
#include <vector>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include <boost/scoped_ptr.hpp>

#include "about.h"
#include "menudialog.h"
#pragma GCC diagnostic pop

namespace ribi {

struct TestReversi;

struct TestReversiMenuDialog final : public MenuDialog
{
  TestReversiMenuDialog();
  ~TestReversiMenuDialog() noexcept {}
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept override;

  About GetAbout() const noexcept override;
  Help GetHelp() const noexcept override;
  boost::shared_ptr<const Program> GetProgram() const noexcept override;
  std::string GetVersion() const noexcept override;
  std::vector<std::string> GetVersionHistory() const noexcept override;

  private:

  #ifndef NDEBUG
  static void Test() noexcept;
  #endif
};

} //~namespace ribi

#endif // TESTREVERSIMENUDIALOG_H
