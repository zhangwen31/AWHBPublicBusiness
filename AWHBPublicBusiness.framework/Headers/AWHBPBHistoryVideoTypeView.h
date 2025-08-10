//
//  AWHBPBHistoryVideoTypeView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2022/9/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^SelectBlock)(id string,NSString *placeLabText);
@interface AWHBPBHistoryVideoTypeView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)UILabel *placeLab;
@property(nonatomic,copy)NSString *name;
@property(nonatomic,strong)NSString *selectName;
@property(nonatomic,copy)SelectBlock SelectBlock;

@end

NS_ASSUME_NONNULL_END
