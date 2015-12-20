#
# Be sure to run `pod lib lint DemoOpensSSL.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "DemoOpensSSL"
  s.version          = "0.1.20"
  s.summary          = "A short description of DemoOpensSSL."

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!  
  s.description      = "POC"

  s.homepage         = "https://github.com/oper2000/Demo/tree/1.0.20"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "Michael Davidovich" => "michaeld@il.ibm.com" }
  s.source           = { :git => "https://github.com/oper2000/Demo", :tag => "1.0.20" }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform     = :ios, '8.0'
  #s.platform     = :watchos, '2.0'
  s.requires_arc = true

  s.frameworks = 'SystemConfiguration','MobileCoreServices','CoreData','CoreLocation','Security'

  s.ios.vendored_frameworks = 'framework/openssl.framework', 'framework/IBMMobileFirstPlatformFoundationOpenSSLUtils.framework', 'framework/IBMMobileFirstPlatformFoundation.framework'
  #s.watchos.vendored_frameworks = 'framework/watchOS/IBMMobileFirstPlatformFoundation.framework'

  s.libraries = 'stdc++.6','z','c++'
  
  #s.resources = 'IBMMobileFirstPlatformFoundation/Resources/sample.worklight.plist', 'IBMMobileFirstPlatformFoundation/Resources/Localizations.bundle'
  
  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
  
  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
