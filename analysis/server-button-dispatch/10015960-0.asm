
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10015960 <.text+0x14960>:
10015960:	56                   	push   esi
10015961:	8b f1                	mov    esi,ecx
10015963:	57                   	push   edi
10015964:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1001596a:	e8 21 1e 00 00       	call   0x10017790
1001596f:	50                   	push   eax
10015970:	ff b6 7c 01 00 00    	push   DWORD PTR [esi+0x17c]
10015976:	e8 e5 36 10 00       	call   0x10119060
1001597b:	83 c4 08             	add    esp,0x8
1001597e:	85 c0                	test   eax,eax
10015980:	0f 84 97 00 00 00    	je     0x10015a1d
10015986:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10015989:	51                   	push   ecx
1001598a:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10015991:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
10015997:	c7 86 00 01 00 00 00 	mov    DWORD PTR [esi+0x100],0x0
1001599e:	00 00 00 
100159a1:	6a 03                	push   0x3
100159a3:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x3f800000
100159aa:	00 80 3f 
100159ad:	e8 de 1d 00 00       	call   0x10017790
100159b2:	50                   	push   eax
100159b3:	8b ce                	mov    ecx,esi
100159b5:	e8 76 cf 0e 00       	call   0x10102930
100159ba:	83 be a8 01 00 00 00 	cmp    DWORD PTR [esi+0x1a8],0x0
100159c1:	75 40                	jne    0x10015a03
100159c3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100159c6:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
100159cd:	75 34                	jne    0x10015a03
100159cf:	f3 0f 10 86 0c 01 00 	movss  xmm0,DWORD PTR [esi+0x10c]
100159d6:	00 
100159d7:	0f 57 c9             	xorps  xmm1,xmm1
100159da:	0f 2e c1             	ucomiss xmm0,xmm1
100159dd:	c7 46 78 50 2d 01 10 	mov    DWORD PTR [esi+0x78],0x10012d50
100159e4:	9f                   	lahf
100159e5:	f6 c4 44             	test   ah,0x44
100159e8:	7b 10                	jnp    0x100159fa
100159ea:	8b 06                	mov    eax,DWORD PTR [esi]
100159ec:	51                   	push   ecx
100159ed:	8b ce                	mov    ecx,esi
100159ef:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100159f4:	ff 50 08             	call   DWORD PTR [eax+0x8]
100159f7:	5f                   	pop    edi
100159f8:	5e                   	pop    esi
100159f9:	c3                   	ret
100159fa:	5f                   	pop    edi
100159fb:	8b ce                	mov    ecx,esi
100159fd:	5e                   	pop    esi
100159fe:	e9 4d d3 ff ff       	jmp    0x10012d50
10015a03:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10015a06:	8b 80 a4 01 00 00    	mov    eax,DWORD PTR [eax+0x1a4]
10015a0c:	25 00 01 00 00       	and    eax,0x100
10015a11:	f7 d8                	neg    eax
10015a13:	1b c0                	sbb    eax,eax
10015a15:	25 70 2f 01 10       	and    eax,0x10012f70
10015a1a:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
10015a1d:	5f                   	pop    edi
10015a1e:	5e                   	pop    esi
10015a1f:	c3                   	ret
