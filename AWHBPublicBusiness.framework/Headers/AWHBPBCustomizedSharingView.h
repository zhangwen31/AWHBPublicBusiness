//
//  AWHBPBCustomizedSharingView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2026/5/5.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCustomizedSharingView : UIView

@property (nonatomic, copy) void (^shareClick)(NSString *time, NSString *day, NSString *hour, NSString *minute);

@property (nonatomic, copy) void (^closeClick)(void);

@end

NS_ASSUME_NONNULL_END
