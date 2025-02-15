#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "SBTUITestTunnelClient.h"
#import "SBTUITestTunnelClientProtocol.h"
#import "SBTUITunneledApplication.h"
#import "XCTestCase+AppExtension.h"
#import "XCTestCase+Swizzles.h"
#import "NSData+gzip.h"
#import "NSString+SwiftDemangle.h"
#import "NSURLRequest+HTTPBodyFix.h"
#import "NSURLRequest+SBTUITestTunnelMatch.h"
#import "SBTMonitoredNetworkRequest.h"
#import "SBTRequestMatch.h"
#import "SBTRewrite.h"
#import "SBTStubResponse.h"
#import "SBTSwizzleHelpers.h"
#import "SBTUITestTunnel.h"
#import "NSData+SHA1.h"
#import "NSURLSession+HTTPBodyFix.h"
#import "NSURLSessionConfiguration+SBTUITestTunnel.h"
#import "SBTProxyURLProtocol.h"
#import "SBTSwizzleHelpers.h"
#import "SBTUITestTunnelServer.h"
#import "UITextField+DisableAutocomplete.h"
#import "NSData+gzip.h"
#import "NSString+SwiftDemangle.h"
#import "NSURLRequest+HTTPBodyFix.h"
#import "NSURLRequest+SBTUITestTunnelMatch.h"
#import "SBTMonitoredNetworkRequest.h"
#import "SBTRequestMatch.h"
#import "SBTRewrite.h"
#import "SBTStubResponse.h"
#import "SBTSwizzleHelpers.h"
#import "SBTUITestTunnel.h"

FOUNDATION_EXPORT double SBTUITestTunnelVersionNumber;
FOUNDATION_EXPORT const unsigned char SBTUITestTunnelVersionString[];

