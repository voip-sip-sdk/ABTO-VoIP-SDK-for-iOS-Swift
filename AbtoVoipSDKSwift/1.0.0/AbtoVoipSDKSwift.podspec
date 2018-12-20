Pod::Spec.new do |s|
  s.name = 'AbtoVoipSDKSwift'
  s.authors = 'ABTO LLC'
  s.homepage = 'http://voipsipsdk.com'
  s.version = '1.0.0'
  s.source = { :git => 'https://github.com/voip-sip-sdk/ABTO-VoIP-SDK-for-iOS-Swift.git', :tag => "v#{s.version}" }
  s.summary = 'Swift version of ABTO VoIP SDK for iOS using CocoaPods'
  s.license  = 'Commercial'
  s.platform = :ios, '8.0'
  s.frameworks = 'SystemConfiguration', 'CoreMedia', 'CoreGraphics', 'UIKit', 'Accelerate', 'AudioToolbox', 'AVFoundation', 'Foundation'
  s.vendored_frameworks = 'AbtoVoipSDKSwift/1.0.0/AbtoSipClientWrapper.framework'
  s.resources = 'AbtoVoipSDKSwift/1.0.0/AbtoSipClientWrapper.framework/Resources/*.{wav,mp3,caf}'
  s.source_files = 'AbtoVoipSDKSwift/1.0.0/*.{h,m}', 'AbtoVoipSDKSwift/1.0.0/AbtoSipClientWrapper.framework/Headers/AbtoSipPhoneObserver.h'
  s.preserve_paths = 'AbtoVoipSDKSwift/1.0.0/*.{h,m,modulemap}'
  s.public_header_files = 'AbtoVoipSDKSwift/1.0.0/AbtoVoipSDKSwift.h', 'AbtoVoipSDKSwift/1.0.0/AbtoSipClientWrapper.framework/Headers/AbtoSipPhoneObserver.h'
  s.module_map = 'AbtoVoipSDKSwift/1.0.0/module.modulemap'
  s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  s.libraries = 'c++', 'z'
  s.requires_arc = true
end
