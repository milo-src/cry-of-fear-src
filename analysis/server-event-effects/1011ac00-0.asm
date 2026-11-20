
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011ac00 <.text+0x119c00>:
1011ac00:	55                   	push   ebp
1011ac01:	8b ec                	mov    ebp,esp
1011ac03:	83 ec 5c             	sub    esp,0x5c
1011ac06:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1011ac09:	8d 4d a4             	lea    ecx,[ebp-0x5c]
1011ac0c:	0f 57 c0             	xorps  xmm0,xmm0
1011ac0f:	51                   	push   ecx
1011ac10:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011ac13:	f3 0f 10 90 7c 01 00 	movss  xmm2,DWORD PTR [eax+0x17c]
1011ac1a:	00 
1011ac1b:	f3 0f 10 98 80 01 00 	movss  xmm3,DWORD PTR [eax+0x180]
1011ac22:	00 
1011ac23:	f3 0f 10 88 78 01 00 	movss  xmm1,DWORD PTR [eax+0x178]
1011ac2a:	00 
1011ac2b:	f3 0f 58 50 0c       	addss  xmm2,DWORD PTR [eax+0xc]
1011ac30:	f3 0f 58 58 10       	addss  xmm3,DWORD PTR [eax+0x10]
1011ac35:	f3 0f 58 48 08       	addss  xmm1,DWORD PTR [eax+0x8]
1011ac3a:	f3 0f 11 55 e0       	movss  DWORD PTR [ebp-0x20],xmm2
1011ac3f:	f3 0f 5c d0          	subss  xmm2,xmm0
1011ac43:	f3 0f 11 5d e4       	movss  DWORD PTR [ebp-0x1c],xmm3
1011ac48:	f3 0f 5c 1d 1c 1f 1a 	subss  xmm3,DWORD PTR ds:0x101a1f1c
1011ac4f:	10 
1011ac50:	f3 0f 11 4d dc       	movss  DWORD PTR [ebp-0x24],xmm1
1011ac55:	f3 0f 5c c8          	subss  xmm1,xmm0
1011ac59:	f3 0f 11 55 ec       	movss  DWORD PTR [ebp-0x14],xmm2
1011ac5e:	f3 0f 11 5d f0       	movss  DWORD PTR [ebp-0x10],xmm3
1011ac63:	f3 0f 11 4d e8       	movss  DWORD PTR [ebp-0x18],xmm1
1011ac68:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011ac6e:	8d 45 e8             	lea    eax,[ebp-0x18]
1011ac71:	6a 00                	push   0x0
1011ac73:	6a 01                	push   0x1
1011ac75:	50                   	push   eax
1011ac76:	8d 45 dc             	lea    eax,[ebp-0x24]
1011ac79:	50                   	push   eax
1011ac7a:	e8 a1 fb ff ff       	call   0x1011a820
1011ac7f:	f3 0f 10 45 b4       	movss  xmm0,DWORD PTR [ebp-0x4c]
1011ac84:	83 c4 18             	add    esp,0x18
1011ac87:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1011ac8e:	9f                   	lahf
1011ac8f:	f6 c4 44             	test   ah,0x44
1011ac92:	0f 8b c1 00 00 00    	jnp    0x1011ad59
1011ac98:	8d 45 b8             	lea    eax,[ebp-0x48]
1011ac9b:	50                   	push   eax
1011ac9c:	e8 df ea ff ff       	call   0x10119780
1011aca1:	83 c4 04             	add    esp,0x4
1011aca4:	83 f8 fd             	cmp    eax,0xfffffffd
1011aca7:	0f 85 ac 00 00 00    	jne    0x1011ad59
1011acad:	f3 0f 10 45 b8       	movss  xmm0,DWORD PTR [ebp-0x48]
1011acb2:	8d 45 f4             	lea    eax,[ebp-0xc]
1011acb5:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1011acba:	f3 0f 10 45 bc       	movss  xmm0,DWORD PTR [ebp-0x44]
1011acbf:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1011acc4:	f3 0f 10 45 c0       	movss  xmm0,DWORD PTR [ebp-0x40]
1011acc9:	50                   	push   eax
1011acca:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1011accf:	e8 ac ea ff ff       	call   0x10119780
1011acd4:	83 c4 04             	add    esp,0x4
1011acd7:	83 f8 fd             	cmp    eax,0xfffffffd
1011acda:	75 27                	jne    0x1011ad03
1011acdc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1011ace0:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1011ace5:	8d 45 f4             	lea    eax,[ebp-0xc]
1011ace8:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
1011acef:	10 
1011acf0:	50                   	push   eax
1011acf1:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1011acf6:	e8 85 ea ff ff       	call   0x10119780
1011acfb:	83 c4 04             	add    esp,0x4
1011acfe:	83 f8 fd             	cmp    eax,0xfffffffd
1011ad01:	74 dd                	je     0x1011ace0
1011ad03:	6a 00                	push   0x0
1011ad05:	6a 00                	push   0x0
1011ad07:	ff 35 44 66 22 10    	push   DWORD PTR ds:0x10226644
1011ad0d:	6a 02                	push   0x2
1011ad0f:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011ad15:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
1011ad1a:	83 c4 0c             	add    esp,0xc
1011ad1d:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011ad22:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011ad28:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
1011ad2d:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011ad32:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011ad38:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1011ad3d:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011ad42:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1011ad48:	6a 28                	push   0x28
1011ad4a:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1011ad50:	83 c4 08             	add    esp,0x8
1011ad53:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011ad59:	8b e5                	mov    esp,ebp
1011ad5b:	5d                   	pop    ebp
1011ad5c:	c3                   	ret
