//
//  AWHBPBFormsHeadView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnSelectTitleBlock)(NSString *titleLabText);
@interface AWHBPBFormsHeadView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)NSArray *titleArr;
@property(nonatomic,strong)NSArray *detailArr;
@property(nonatomic,strong)NSArray *canNoShowRightArr; //不显示右边箭头
@property(nonatomic,strong)NSArray *placeholderDetailArr;
@property(nonatomic,assign)BOOL hidden;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) ReturnSelectTitleBlock ReturnSelectTitleBlock;

@end

NS_ASSUME_NONNULL_END
