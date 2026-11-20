
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10015f60 <.text+0x14f60>:
10015f60:	55                   	push   ebp
10015f61:	8b ec                	mov    ebp,esp
10015f63:	56                   	push   esi
10015f64:	8b f1                	mov    esi,ecx
10015f66:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10015f69:	f3 0f 2c 80 34 01 00 	cvttss2si eax,DWORD PTR [eax+0x134]
10015f70:	00 
10015f71:	50                   	push   eax
10015f72:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10015f75:	e8 26 24 00 00       	call   0x100183a0
10015f7a:	85 c0                	test   eax,eax
10015f7c:	74 55                	je     0x10015fd3
10015f7e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10015f81:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10015f88:	10 
10015f89:	51                   	push   ecx
10015f8a:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10015f91:	8b ce                	mov    ecx,esi
10015f93:	f3 0f 5c 80 34 01 00 	subss  xmm0,DWORD PTR [eax+0x134]
10015f9a:	00 
10015f9b:	f3 0f 11 80 34 01 00 	movss  DWORD PTR [eax+0x134],xmm0
10015fa2:	00 
10015fa3:	0f 57 c0             	xorps  xmm0,xmm0
10015fa6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10015fa9:	f3 0f 10 88 34 01 00 	movss  xmm1,DWORD PTR [eax+0x134]
10015fb0:	00 
10015fb1:	0f 2e c8             	ucomiss xmm1,xmm0
10015fb4:	9f                   	lahf
10015fb5:	f6 c4 44             	test   ah,0x44
10015fb8:	7b 0f                	jnp    0x10015fc9
10015fba:	6a 01                	push   0x1
10015fbc:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10015fbf:	e8 bc ca 0e 00       	call   0x10102a80
10015fc4:	5e                   	pop    esi
10015fc5:	5d                   	pop    ebp
10015fc6:	c2 10 00             	ret    0x10
10015fc9:	6a 00                	push   0x0
10015fcb:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10015fce:	e8 ad ca 0e 00       	call   0x10102a80
10015fd3:	5e                   	pop    esi
10015fd4:	5d                   	pop    ebp
10015fd5:	c2 10 00             	ret    0x10
