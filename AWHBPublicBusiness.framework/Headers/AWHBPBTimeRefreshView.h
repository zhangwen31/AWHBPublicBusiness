//
//  AWHBPBTimeRefreshView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^SelectTimeBlock)(NSString *time);
@interface AWHBPBTimeRefreshView : UIView
@property(nonatomic,copy)SelectTimeBlock SelectTimeBlock;
@property(nonatomic,copy)void(^closeClick)(void);
@end

NS_ASSUME_NONNULL_END
