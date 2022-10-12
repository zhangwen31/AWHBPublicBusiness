//
//  AWHBPBMonomerMonitoringHeadView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^GetPlateBlock)(NSString *plate);
typedef void(^EmptyPlateBlock)(void);
@interface AWHBPBMonomerMonitoringHeadView : UIView
/** */
@property(nonatomic,copy)GetPlateBlock GetPlateBlock;
@property(nonatomic,copy)EmptyPlateBlock EmptyPlateBlock;
@property(nonatomic,copy)void(^textDidBeginEditing)(void);
/** */
//@property(nonatomic,strong)UILabel *plateLab;

@property(nonatomic,strong)UITextField *textField;

//是否不能编辑 搜索车辆
@property(nonatomic, assign) BOOL isNoEnabled;

@property(nonatomic, assign) BOOL isShowBottomView;

@end

NS_ASSUME_NONNULL_END
