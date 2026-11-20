
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000ff30 <.text+0xef30>:
1000ff30:	55                   	push   ebp
1000ff31:	8b ec                	mov    ebp,esp
1000ff33:	83 ec 18             	sub    esp,0x18
1000ff36:	53                   	push   ebx
1000ff37:	8b d9                	mov    ebx,ecx
1000ff39:	56                   	push   esi
1000ff3a:	57                   	push   edi
1000ff3b:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1000ff3e:	f3 0f 10 42 08       	movss  xmm0,DWORD PTR [edx+0x8]
1000ff43:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1000ff48:	f3 0f 10 42 0c       	movss  xmm0,DWORD PTR [edx+0xc]
1000ff4d:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1000ff52:	f3 0f 10 42 10       	movss  xmm0,DWORD PTR [edx+0x10]
1000ff57:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1000ff5c:	f3 0f 10 82 f4 00 00 	movss  xmm0,DWORD PTR [edx+0xf4]
1000ff63:	00 
1000ff64:	f3 0f 59 05 d8 1d 1a 	mulss  xmm0,DWORD PTR ds:0x101a1dd8
1000ff6b:	10 
1000ff6c:	f3 0f 2c c0          	cvttss2si eax,xmm0
1000ff70:	f3 0f 10 82 f8 00 00 	movss  xmm0,DWORD PTR [edx+0xf8]
1000ff77:	00 
1000ff78:	f3 0f 59 05 d8 1d 1a 	mulss  xmm0,DWORD PTR ds:0x101a1dd8
1000ff7f:	10 
1000ff80:	50                   	push   eax
1000ff81:	f7 d8                	neg    eax
1000ff83:	50                   	push   eax
1000ff84:	f3 0f 2c f8          	cvttss2si edi,xmm0
1000ff88:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1000ff8e:	57                   	push   edi
1000ff8f:	f7 df                	neg    edi
1000ff91:	8b f0                	mov    esi,eax
1000ff93:	57                   	push   edi
1000ff94:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1000ff9a:	83 c4 04             	add    esp,0x4
1000ff9d:	8b cb                	mov    ecx,ebx
1000ff9f:	66 0f 6e ce          	movd   xmm1,esi
1000ffa3:	0f 5b c9             	cvtdq2ps xmm1,xmm1
1000ffa6:	66 0f 6e c0          	movd   xmm0,eax
1000ffaa:	8b c4                	mov    eax,esp
1000ffac:	f3 0f 58 4d fc       	addss  xmm1,DWORD PTR [ebp-0x4]
1000ffb1:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1000ffb4:	f3 0f 11 4d e8       	movss  DWORD PTR [ebp-0x18],xmm1
1000ffb9:	f3 0f 58 45 f8       	addss  xmm0,DWORD PTR [ebp-0x8]
1000ffbe:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
1000ffc3:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
1000ffc8:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
1000ffcd:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
1000ffd1:	f3 0f 10 45 ec       	movss  xmm0,DWORD PTR [ebp-0x14]
1000ffd6:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1000ffdb:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
1000ffe0:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1000ffe5:	e8 46 04 00 00       	call   0x10010430
1000ffea:	85 c0                	test   eax,eax
1000ffec:	0f 84 41 01 00 00    	je     0x10010133
1000fff2:	6a 04                	push   0x4
1000fff4:	6a 00                	push   0x0
1000fff6:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1000fffc:	8b c8                	mov    ecx,eax
1000fffe:	83 c4 08             	add    esp,0x8
10010001:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10010006:	83 f9 04             	cmp    ecx,0x4
10010009:	77 48                	ja     0x10010053
1001000b:	ff 24 8d 3c 01 01 10 	jmp    DWORD PTR [ecx*4+0x1001013c]
10010012:	b9 5c 45 1a 10       	mov    ecx,0x101a455c
10010017:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1001001d:	eb 37                	jmp    0x10010056
1001001f:	b9 70 45 1a 10       	mov    ecx,0x101a4570
10010024:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1001002a:	eb 2a                	jmp    0x10010056
1001002c:	b9 84 45 1a 10       	mov    ecx,0x101a4584
10010031:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10010037:	eb 1d                	jmp    0x10010056
10010039:	b9 98 45 1a 10       	mov    ecx,0x101a4598
1001003e:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10010044:	eb 10                	jmp    0x10010056
10010046:	b9 ac 45 1a 10       	mov    ecx,0x101a45ac
1001004b:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10010051:	eb 03                	jmp    0x10010056
10010053:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
10010056:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001005c:	8d 55 e8             	lea    edx,[ebp-0x18]
1001005f:	6a 01                	push   0x1
10010061:	52                   	push   edx
10010062:	03 c1                	add    eax,ecx
10010064:	50                   	push   eax
10010065:	e8 96 f3 08 00       	call   0x1009f400
1001006a:	8b f0                	mov    esi,eax
1001006c:	c7 44 24 08 00 00 e0 	mov    DWORD PTR [esp+0x8],0x40e00000
10010073:	40 
10010074:	83 c4 04             	add    esp,0x4
10010077:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1001007a:	c7 04 24 00 00 40 40 	mov    DWORD PTR [esp],0x40400000
10010081:	c7 81 4c 01 00 00 05 	mov    DWORD PTR [ecx+0x14c],0x5
10010088:	00 00 00 
1001008b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1001008e:	c7 81 54 01 00 00 00 	mov    DWORD PTR [ecx+0x154],0x437f0000
10010095:	00 7f 43 
10010098:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1001009b:	c7 81 58 01 00 00 00 	mov    DWORD PTR [ecx+0x158],0x437f0000
100100a2:	00 7f 43 
100100a5:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100100a8:	c7 81 5c 01 00 00 00 	mov    DWORD PTR [ecx+0x15c],0x437f0000
100100af:	00 7f 43 
100100b2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100100b5:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x42000000
100100bc:	00 00 42 
100100bf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100100c2:	c7 80 60 01 00 00 00 	mov    DWORD PTR [eax+0x160],0x0
100100c9:	00 00 00 
100100cc:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
100100d2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100100d5:	c7 44 24 04 00 00 e0 	mov    DWORD PTR [esp+0x4],0x40e00000
100100dc:	40 
100100dd:	c7 04 24 00 00 40 40 	mov    DWORD PTR [esp],0x40400000
100100e4:	d9 58 20             	fstp   DWORD PTR [eax+0x20]
100100e7:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
100100ed:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100100f0:	c7 44 24 04 00 00 a0 	mov    DWORD PTR [esp+0x4],0x40a00000
100100f7:	40 
100100f8:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
100100ff:	d9 58 24             	fstp   DWORD PTR [eax+0x24]
10010102:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10010108:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001010b:	83 c4 04             	add    esp,0x4
1001010e:	8b ce                	mov    ecx,esi
10010110:	d9 58 28             	fstp   DWORD PTR [eax+0x28]
10010113:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10010116:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1001011d:	c7 80 48 01 00 00 00 	mov    DWORD PTR [eax+0x148],0x3f800000
10010124:	00 80 3f 
10010127:	8b 06                	mov    eax,DWORD PTR [esi]
10010129:	ff 50 08             	call   DWORD PTR [eax+0x8]
1001012c:	8b ce                	mov    ecx,esi
1001012e:	e8 dd aa 07 00       	call   0x1008ac10
10010133:	5f                   	pop    edi
10010134:	5e                   	pop    esi
10010135:	5b                   	pop    ebx
10010136:	8b e5                	mov    esp,ebp
10010138:	5d                   	pop    ebp
10010139:	c3                   	ret
