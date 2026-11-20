
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10004880 <.text+0x3880>:
10004880:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10004886:	56                   	push   esi
10004887:	57                   	push   edi
10004888:	33 ff                	xor    edi,edi
1000488a:	be 5c 00 00 00       	mov    esi,0x5c
1000488f:	90                   	nop
10004890:	8b 04 0e             	mov    eax,DWORD PTR [esi+ecx*1]
10004893:	23 05 88 10 21 10    	and    eax,DWORD PTR ds:0x10211088
10004899:	3b 05 88 10 21 10    	cmp    eax,DWORD PTR ds:0x10211088
1000489f:	75 23                	jne    0x100048c4
100048a1:	8b 81 6c f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f56c]
100048a7:	57                   	push   edi
100048a8:	68 bc 1c 1a 10       	push   0x101a1cbc
100048ad:	ff d0                	call   eax
100048af:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100048b4:	83 c4 08             	add    esp,0x8
100048b7:	c7 04 06 00 00 00 00 	mov    DWORD PTR [esi+eax*1],0x0
100048be:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100048c4:	8b 44 0e dc          	mov    eax,DWORD PTR [esi+ecx*1-0x24]
100048c8:	23 05 88 10 21 10    	and    eax,DWORD PTR ds:0x10211088
100048ce:	3b 05 88 10 21 10    	cmp    eax,DWORD PTR ds:0x10211088
100048d4:	75 24                	jne    0x100048fa
100048d6:	8b 81 6c f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f56c]
100048dc:	57                   	push   edi
100048dd:	68 d8 1c 1a 10       	push   0x101a1cd8
100048e2:	ff d0                	call   eax
100048e4:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100048e9:	83 c4 08             	add    esp,0x8
100048ec:	c7 44 06 dc 00 00 00 	mov    DWORD PTR [esi+eax*1-0x24],0x0
100048f3:	00 
100048f4:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100048fa:	8b 81 f4 f4 04 00    	mov    eax,DWORD PTR [ecx+0x4f4f4]
10004900:	f3 0f 10 0c 0e       	movss  xmm1,DWORD PTR [esi+ecx*1]
10004905:	f3 0f 10 40 34       	movss  xmm0,DWORD PTR [eax+0x34]
1000490a:	0f 2f c8             	comiss xmm1,xmm0
1000490d:	76 22                	jbe    0x10004931
1000490f:	8b 81 68 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f568]
10004915:	57                   	push   edi
10004916:	68 f4 1c 1a 10       	push   0x101a1cf4
1000491b:	ff d0                	call   eax
1000491d:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10004923:	8b 81 f4 f4 04 00    	mov    eax,DWORD PTR [ecx+0x4f4f4]
10004929:	8b 40 34             	mov    eax,DWORD PTR [eax+0x34]
1000492c:	89 04 0e             	mov    DWORD PTR [esi+ecx*1],eax
1000492f:	eb 37                	jmp    0x10004968
10004931:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
10004938:	0f 2f c1             	comiss xmm0,xmm1
1000493b:	76 34                	jbe    0x10004971
1000493d:	8b 81 68 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f568]
10004943:	57                   	push   edi
10004944:	68 18 1d 1a 10       	push   0x101a1d18
10004949:	ff d0                	call   eax
1000494b:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10004951:	8b 81 f4 f4 04 00    	mov    eax,DWORD PTR [ecx+0x4f4f4]
10004957:	f3 0f 10 40 34       	movss  xmm0,DWORD PTR [eax+0x34]
1000495c:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
10004963:	f3 0f 11 04 0e       	movss  DWORD PTR [esi+ecx*1],xmm0
10004968:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000496e:	83 c4 08             	add    esp,0x8
10004971:	83 c6 04             	add    esi,0x4
10004974:	47                   	inc    edi
10004975:	83 fe 68             	cmp    esi,0x68
10004978:	0f 8c 12 ff ff ff    	jl     0x10004890
1000497e:	5f                   	pop    edi
1000497f:	5e                   	pop    esi
10004980:	c3                   	ret
