typedef struct _KHEAPBLOCKBM {
	struct _KHEAPBLOCKBM	                *next;
	uint32_t				size;
	uint32_t				used;
	uint32_t				bsize;
        uint32_t                                lfb;
} KHEAPBLOCKBM;
