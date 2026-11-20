100621d0:	55                   	push   ebp
100621d1:	8b ec                	mov    ebp,esp
100621d3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100621d6:	81 78 24 66 fd ff ff 	cmp    DWORD PTR [eax+0x24],0xfffffd66
100621dd:	75 05                	jne    0x100621e4
100621df:	8b 40 2c             	mov    eax,DWORD PTR [eax+0x2c]
100621e2:	5d                   	pop    ebp
100621e3:	c3                   	ret
100621e4:	33 c0                	xor    eax,eax
100621e6:	5d                   	pop    ebp
100621e7:	c3                   	ret
