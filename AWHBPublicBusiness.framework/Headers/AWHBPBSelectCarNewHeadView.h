//
//  AWHBPBSelectCarNewHeadView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/14.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBSelectCarTypeView.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBSeachNewBlock)(AWHBPBSelectCarType type, NSString *plate);
typedef void(^AWHBPBChangTypeBlock)(AWHBPBSelectCarType type);
@interface AWHBPBSelectCarNewHeadView : UIView
@property(nonatomic,copy)AWHBPBSeachNewBlock seachBlock;
@property(nonatomic,copy)AWHBPBChangTypeBlock changTypeBlock;
@property(nonatomic,assign)AWHBPBSelectCarType type;
@property(nonatomic,strong)UITextField *seachField;
@property(nonatomic,strong)UIButton *seachButton;
@end

NS_ASSUME_NONNULL_END
