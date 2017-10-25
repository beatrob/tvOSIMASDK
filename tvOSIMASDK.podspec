#
# Be sure to run `pod lib lint SwiftSidemenu.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
s.name             = 'tvOSIMASDK'
s.version          = 'Master'
s.summary          = 'Contains the IMA SDK for tvos'


s.description      = 'Contains the IMA SDK for tvos'

s.homepage         = 'https://github.com/beatrob/tvOSIMASDK'
s.license          = { :type => 'MIT', :file => 'LICENSE' }
s.author           = { 'robertkonczi' => 'robert.konczi@24i.com' }
s.source           = { :git => 'https://github.com/beatrob/tvOSIMASDK.git', :branch => 'master' }

s.tvos.deployment_target = '9.0'

s.tvos.vendored_frameworks = 'Frameworks/InteractiveMediaAds.framework'
s.tvos.weak_framework = 'InteractiveMediaAds'
end
