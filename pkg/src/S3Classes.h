
void C_init_node(SEXP node, int nobs, int ninputs, int nsurr, int q);
void S3set_nodeID(SEXP node, int nodeID);
int S3get_nodeID(SEXP node);
SEXP S3get_nodeweights(SEXP node);
double S3get_sumweights(SEXP node);
SEXP S3get_teststat(SEXP node);
SEXP S3get_criterion(SEXP node);
SEXP S3get_maxcriterion(SEXP node);
void S3set_nodeterminal(SEXP node);
int S3get_nodeterminal(SEXP node);
SEXP S3get_primarysplit(SEXP node);
SEXP S3get_surrogatesplits(SEXP node);
SEXP S3get_prediction(SEXP node);
void C_init_orderedsplit(SEXP split, int nobs);
void C_init_nominalsplit(SEXP split, int nlevels, int nobs);
void S3set_variableID(SEXP split, int variableID);
int S3get_variableID(SEXP split);
int S3is_ordered(SEXP split);
void S3set_ordered(SEXP split);
void S3set_nominal(SEXP split);
SEXP S3get_splitpoint(SEXP split);
SEXP S3get_splitstatistics(SEXP split);
SEXP S3get_leftnode(SEXP node);
SEXP S3get_rightnode(SEXP node);
SEXP S3get_table(SEXP node);
int S3get_toleft(SEXP split);
void S3set_toleft(SEXP split, int left);