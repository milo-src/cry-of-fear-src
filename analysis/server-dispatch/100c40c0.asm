
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c40c0 <.text+0xc30c0>:
100c40c0:	55                   	push   ebp
100c40c1:	8b ec                	mov    ebp,esp
100c40c3:	51                   	push   ecx
100c40c4:	56                   	push   esi
100c40c5:	8b 35 90 31 22 10    	mov    esi,DWORD PTR ds:0x10223190
100c40cb:	85 f6                	test   esi,esi
100c40cd:	75 15                	jne    0x100c40e4
100c40cf:	68 4c 5d 1d 10       	push   0x101d5d4c
100c40d4:	6a 04                	push   0x4
100c40d6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c40dc:	83 c4 08             	add    esp,0x8
100c40df:	5e                   	pop    esi
100c40e0:	8b e5                	mov    esp,ebp
100c40e2:	5d                   	pop    ebp
100c40e3:	c3                   	ret
100c40e4:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
100c40e7:	85 c0                	test   eax,eax
100c40e9:	74 2f                	je     0x100c411a
100c40eb:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100c40f0:	50                   	push   eax
100c40f1:	e8 4a 01 00 00       	call   0x100c4240
100c40f6:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
100c40f9:	83 c4 04             	add    esp,0x4
100c40fc:	f6 41 60 a0          	test   BYTE PTR [ecx+0x60],0xa0
100c4100:	75 0f                	jne    0x100c4111
100c4102:	8b 41 3c             	mov    eax,DWORD PTR [ecx+0x3c]
100c4105:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
100c4108:	c7 41 3c 00 00 00 00 	mov    DWORD PTR [ecx+0x3c],0x0
100c410f:	eb 02                	jmp    0x100c4113
100c4111:	8b f1                	mov    esi,ecx
100c4113:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
100c4116:	85 c0                	test   eax,eax
100c4118:	75 d6                	jne    0x100c40f0
100c411a:	5e                   	pop    esi
100c411b:	8b e5                	mov    esp,ebp
100c411d:	5d                   	pop    ebp
100c411e:	c3                   	ret
