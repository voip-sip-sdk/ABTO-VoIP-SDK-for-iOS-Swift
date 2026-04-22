Pod::Spec.new do |s|
  s.name = 'AbtoVoipSDKSwift'
  s.authors = 'ABTO LLC'
  s.homepage = 'http://voipsipsdk.com'
  s.version = '2.0.0'
  s.source = { :git => 'https://github.com/voip-sip-sdk/ABTO-VoIP-SDK-for-iOS-Swift.git', :tag => "v#{s.version}" }
  s.summary = 'Swift version of ABTO VoIP SDK for iOS using CocoaPods'
  s.license  = 'Commercial'
  s.platform = :ios, '15.0'
  s.frameworks = 'SystemConfiguration', 'CoreMedia', 'CoreGraphics', 'UIKit', 'Accelerate', 'AudioToolbox', 'AVFoundation', 'Foundation', 'AbtoSipClientWrapper'
  s.vendored_frameworks = 'AbtoVoipSDKSwift/#{s.version}/AbtoSipClientWrapper.xcframework'
  s.resources = 'AbtoVoipSDKSwift/#{s.version}/AbtoSipClientWrapper.xcframework/ios-arm64_armv7/AbtoSipClientWrapper.framework/Resources/*.{wav,mp3,caf}'
  s.source_files = 'AbtoVoipSDKSwift/#{s.version}/AbtoVoipSDK.{h,m}'
  s.preserve_paths = 'AbtoVoipSDKSwift/#{s.version}/AbtoVoipSDK.{h,m}'
  s.public_header_files = 'AbtoVoipSDKSwift/#{s.version}/AbtoVoipSDK.h'
  s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  s.libraries = 'c++', 'z'
end
