#define DECL_12( prefix ) \
	int prefix##_one(); \
	int prefix##_two();

DECL_12( prepare )
DECL_12( work )