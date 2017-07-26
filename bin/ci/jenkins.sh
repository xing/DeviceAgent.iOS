#!/usr/bin/env bash

xcrun simctl help >/dev/null 2>&1
xcrun simctl help >/dev/null 2>&1
xcrun simctl help >/dev/null 2>&1

set -e

bundle install
make docs
bin/ci/install-keychain.sh
make app-agent
make unit-tests
make ipa-agent
make test-ipa

# TestApp is required for Cucumber tests.
make test-app
bundle exec bin/ci/cucumber.rb

