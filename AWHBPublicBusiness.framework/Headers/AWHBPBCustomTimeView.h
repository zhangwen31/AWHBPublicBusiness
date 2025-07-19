//
//  AWHBPBCustomTimeView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^CustomTimeBlock)(NSString *time);
@interface AWHBPBCustomTimeView : UIView
/** */
@property(nonatomic,strong)UITextField *timeTextField;
/** */
@property(nonatomic,copy)CustomTimeBlock CustomTimeBlock;
@end

NS_ASSUME_NONNULL_END
