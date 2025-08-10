//
//  AWHBPBSelectCarHeadView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBSeachBlock)(NSString *plate);
@interface AWHBPBSelectCarHeadView : UIView
@property(nonatomic,copy)AWHBPBSeachBlock seachBlock;
@property(nonatomic,strong)UITextField *seachField;
@property(nonatomic,strong)UIButton *seachButton;
@end

NS_ASSUME_NONNULL_END
