Pod::Spec.new do |s|

    s.name              = 'IdensicMobileSDK'
    s.version           = '1.19.5'
    s.summary           = 'Sum&Substance Mobile SDK'
    s.authors           = 'Sum&Substance'
    s.homepage          = 'https://sumsub.com/'
    s.platform          = :ios
    s.source            = { :http => "https://github.com/paywiser-com/PayWiserOnboardingKycSDK-iOS-IdensicMobile/archive/v1.0.1.tar.gz" }

    s.ios.deployment_target = '12.0'
    s.ios.vendored_frameworks = 'IdensicMobileSDK.xcframework'

    s.pod_target_xcconfig = {
        'ENABLE_BITCODE' => 'No',
        'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
    }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end