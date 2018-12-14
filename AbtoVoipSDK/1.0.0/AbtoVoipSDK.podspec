Pod::Spec.new do |s|
  s.name = 'AbtoVoipSDK'
  s.authors = 'ABTO LLC'
  s.homepage = 'http://voipsipsdk.com'
  s.version = '1.0.0'
  s.source = { :git => 'https://github.com/voip-sip-sdk/ABTO-VoIP-SDK-for-iOS-Swift.git', :tag => "v#{s.version}" }
  s.summary = 'Swift version of ABTO VoIP SDK for iOS using CocoaPods'
  s.license  = 'Commercial'
  s.platform = :ios, '8.0'
  s.frameworks = 'SystemConfiguration', 'CoreMedia', 'CoreGraphics', 'UIKit', 'Accelerate', 'AudioToolbox', 'AVFoundation', 'Foundation'
  s.vendored_frameworks = 'AbtoVoipSDK/1.0.0/AbtoSipClientWrapper.framework'
  s.resources = 'AbtoVoipSDK/1.0.0/AbtoSipClientWrapper.framework/Resources/*.{wav,mp3,caf}'
  s.source_files = 'AbtoVoipSDK/1.0.0/*.{h,m}', 'AbtoVoipSDK/1.0.0/AbtoSipClientWrapper.framework/Headers/AbtoSipPhoneObserver.h'
  s.preserve_paths = 'AbtoVoipSDK/1.0.0/*.{h,m,modulemap}'
  s.public_header_files = 'AbtoVoipSDK/1.0.0/AbtoVoipSDK.h', 'AbtoVoipSDK/1.0.0/AbtoSipClientWrapper.framework/Headers/AbtoSipPhoneObserver.h'
  s.module_map = 'AbtoVoipSDK/1.0.0/module.modulemap'
  s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  s.libraries = 'c++', 'z'
  s.requires_arc = true
end
