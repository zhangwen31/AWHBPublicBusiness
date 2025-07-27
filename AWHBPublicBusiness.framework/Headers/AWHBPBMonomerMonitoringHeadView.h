//
//  AWHBPBMonomerMonitoringHeadView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBSelectCarTypeView.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBPBGetPlateBlock)(AWHBPBSelectCarType type,NSString *plate);
typedef void(^AWHBPBEmptyPlateBlock)(void);
typedef void(^AWHBPBChangTypeBlock)(AWHBPBSelectCarType type);
@interface AWHBPBMonomerMonitoringHeadView : UIView
/** */
@property(nonatomic,copy)AWHBPBGetPlateBlock GetPlateBlock;
@property(nonatomic,copy)AWHBPBEmptyPlateBlock EmptyPlateBlock;
@property(nonatomic,copy)AWHBPBChangTypeBlock changTypeBlock;
@property(nonatomic,assign)AWHBPBSelectCarType type;
@property(nonatomic,copy)void(^textDidBeginEditing)(void);
/** */
//@property(nonatomic,strong)UILabel *plateLab;

@property(nonatomic,strong)UITextField *textField;

//是否不能编辑 搜索车辆
@property(nonatomic, assign) BOOL isNoEnabled;

@property(nonatomic, assign) BOOL isShowBottomView;

@end

NS_ASSUME_NONNULL_END
