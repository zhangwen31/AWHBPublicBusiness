//
//  AWHBPBCarSwitchView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnCarSwitchBtnTitleBlock)(NSString *btnTitle, UIButton *sender);
@interface AWHBPBCarSwitchView : UIView
/** */
@property(nonatomic,copy)ReturnCarSwitchBtnTitleBlock ReturnCarSwitchBtnTitleBlock;

@property(nonatomic,strong)NSString *carName;

- (void)setupShowCarName:(BOOL)isShow;

@end

NS_ASSUME_NONNULL_END
