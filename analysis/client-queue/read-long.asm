100809b0:	56                   	push   esi
100809b1:	8b 35 bc 40 54 10    	mov    esi,DWORD PTR ds:0x105440bc
100809b7:	57                   	push   edi
100809b8:	8d 7e 04             	lea    edi,[esi+0x4]
100809bb:	3b 3d b8 40 54 10    	cmp    edi,DWORD PTR ds:0x105440b8
100809c1:	7e 10                	jle    0x100809d3
100809c3:	5f                   	pop    edi
100809c4:	c7 05 c0 40 54 10 01 	mov    DWORD PTR ds:0x105440c0,0x1
100809cb:	00 00 00 
100809ce:	83 c8 ff             	or     eax,0xffffffff
100809d1:	5e                   	pop    esi
100809d2:	c3                   	ret
100809d3:	a1 b4 40 54 10       	mov    eax,ds:0x105440b4
100809d8:	89 3d bc 40 54 10    	mov    DWORD PTR ds:0x105440bc,edi
100809de:	5f                   	pop    edi
100809df:	0f b6 54 30 03       	movzx  edx,BYTE PTR [eax+esi*1+0x3]
100809e4:	0f b6 4c 30 02       	movzx  ecx,BYTE PTR [eax+esi*1+0x2]
100809e9:	c1 e2 08             	shl    edx,0x8
100809ec:	03 d1                	add    edx,ecx
100809ee:	0f b6 4c 30 01       	movzx  ecx,BYTE PTR [eax+esi*1+0x1]
100809f3:	0f b6 04 30          	movzx  eax,BYTE PTR [eax+esi*1]
100809f7:	c1 e2 08             	shl    edx,0x8
100809fa:	03 d1                	add    edx,ecx
100809fc:	c1 e2 08             	shl    edx,0x8
100809ff:	03 c2                	add    eax,edx
10080a01:	5e                   	pop    esi
10080a02:	c3                   	ret
10080a03:	cc                   	int3
10080a04:	cc                   	int3
10080a05:	cc                   	int3
10080a06:	cc                   	int3
10080a07:	cc                   	int3
10080a08:	cc                   	int3
10080a09:	cc                   	int3
10080a0a:	cc                   	int3
10080a0b:	cc                   	int3
10080a0c:	cc                   	int3
10080a0d:	cc                   	int3
10080a0e:	cc                   	int3
10080a0f:	cc                   	int3
