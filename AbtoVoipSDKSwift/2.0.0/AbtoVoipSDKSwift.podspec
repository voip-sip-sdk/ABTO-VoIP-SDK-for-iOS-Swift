Pod::Spec.new do |s|
  s.name = 'AbtoVoipSDKSwift'
  s.authors = 'ABTO LLC'
  s.homepage = 'http://voipsipsdk.com'
  s.version = '2.0.0'
  s.source = { :git => 'https://github.com/voip-sip-sdk/ABTO-VoIP-SDK-for-iOS-Swift.git', :tag => "v#{s.version}" }
  s.summary = 'Swift version of ABTO VoIP SDK for iOS using CocoaPods'
  s.license  = 'Commercial'
  s.platform = :ios, '12.0'
  s.frameworks = 'SystemConfiguration', 'CoreMedia', 'CoreGraphics', 'UIKit', 'Accelerate', 'AudioToolbox', 'AVFoundation', 'Foundation', 'AbtoSipClientWrapper'
  s.vendored_frameworks = 'AbtoSipClientWrapper.xcframework'
  s.resources = 'AbtoSipClientWrapper/Resources/*.{wav,mp3,caf}'
  s.source_files = 'AbtoVoipSDK.{h,m}'
  s.preserve_paths = 'AbtoVoipSDK.{h,m}'
  s.public_header_files = 'AbtoVoipSDK.h'
  s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  s.libraries = 'c++', 'z'
end
