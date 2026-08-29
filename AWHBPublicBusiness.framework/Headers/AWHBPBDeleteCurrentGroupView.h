//
//  AWHBPBDeleteCurrentGroupView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2026/3/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBDeleteCurrentGroupView : UIView

@property (nonatomic, copy) void (^closeClick)(void);

@property (nonatomic, copy) void (^sureClick)(void);

@end

NS_ASSUME_NONNULL_END
