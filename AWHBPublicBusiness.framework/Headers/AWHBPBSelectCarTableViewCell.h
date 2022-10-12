//
//  AWHBPBSelectCarTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectCarTableViewCell : UITableViewCell
@property (nonatomic,copy) void(^ChoseBtnBlock)(id,BOOL);
@property (nonatomic,assign) BOOL selectedStutas;
@property(nonatomic,strong)UILabel *serialNumLab;
@property(nonatomic,strong)UILabel *plateLab;
@property(nonatomic,strong)UILabel *carNameLab;
@property(nonatomic,strong)UIImageView *stateImageView;
@property (nonatomic,strong) UIButton *choseBtn;
@end

NS_ASSUME_NONNULL_END
