
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008aaa0 <.text+0x89aa0>:
1008aaa0:	f3 0f 10 05 28 97 1a 	movss  xmm0,DWORD PTR ds:0x101a9728
1008aaa7:	10 
1008aaa8:	f3 0f 10 15 a0 1e 1a 	movss  xmm2,DWORD PTR ds:0x101a1ea0
1008aaaf:	10 
1008aab0:	56                   	push   esi
1008aab1:	8b f1                	mov    esi,ecx
1008aab3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008aab6:	f3 0f 10 88 50 01 00 	movss  xmm1,DWORD PTR [eax+0x150]
1008aabd:	00 
1008aabe:	8d 88 50 01 00 00    	lea    ecx,[eax+0x150]
1008aac4:	0f 2f c1             	comiss xmm0,xmm1
1008aac7:	76 2b                	jbe    0x1008aaf4
1008aac9:	80 be 88 00 00 00 00 	cmp    BYTE PTR [esi+0x88],0x0
1008aad0:	75 22                	jne    0x1008aaf4
1008aad2:	f3 0f 58 ca          	addss  xmm1,xmm2
1008aad6:	51                   	push   ecx
1008aad7:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1008aade:	f3 0f 11 09          	movss  DWORD PTR [ecx],xmm1
1008aae2:	8b ce                	mov    ecx,esi
1008aae4:	8b 06                	mov    eax,DWORD PTR [esi]
1008aae6:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008aae9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008aaec:	f3 0f 10 15 a0 1e 1a 	movss  xmm2,DWORD PTR ds:0x101a1ea0
1008aaf3:	10 
1008aaf4:	f3 0f 10 88 50 01 00 	movss  xmm1,DWORD PTR [eax+0x150]
1008aafb:	00 
1008aafc:	8d 88 50 01 00 00    	lea    ecx,[eax+0x150]
1008ab02:	0f 2f 0d 28 97 1a 10 	comiss xmm1,DWORD PTR ds:0x101a9728
1008ab09:	72 32                	jb     0x1008ab3d
1008ab0b:	80 be 88 00 00 00 00 	cmp    BYTE PTR [esi+0x88],0x0
1008ab12:	75 29                	jne    0x1008ab3d
1008ab14:	6a 02                	push   0x2
1008ab16:	6a 00                	push   0x0
1008ab18:	c6 86 88 00 00 00 01 	mov    BYTE PTR [esi+0x88],0x1
1008ab1f:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1008ab25:	8b 16                	mov    edx,DWORD PTR [esi]
1008ab27:	83 c4 04             	add    esp,0x4
1008ab2a:	8b ce                	mov    ecx,esi
1008ab2c:	66 0f 6e c0          	movd   xmm0,eax
1008ab30:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1008ab33:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008ab38:	ff 52 08             	call   DWORD PTR [edx+0x8]
1008ab3b:	5e                   	pop    esi
1008ab3c:	c3                   	ret
1008ab3d:	0f 57 c0             	xorps  xmm0,xmm0
1008ab40:	0f 2f c8             	comiss xmm1,xmm0
1008ab43:	76 23                	jbe    0x1008ab68
1008ab45:	80 be 88 00 00 00 01 	cmp    BYTE PTR [esi+0x88],0x1
1008ab4c:	75 1a                	jne    0x1008ab68
1008ab4e:	f3 0f 5c ca          	subss  xmm1,xmm2
1008ab52:	51                   	push   ecx
1008ab53:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1008ab5a:	f3 0f 11 09          	movss  DWORD PTR [ecx],xmm1
1008ab5e:	8b ce                	mov    ecx,esi
1008ab60:	8b 06                	mov    eax,DWORD PTR [esi]
1008ab62:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008ab65:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008ab68:	f3 0f 10 05 e0 79 1b 	movss  xmm0,DWORD PTR ds:0x101b79e0
1008ab6f:	10 
1008ab70:	0f 2f 80 50 01 00 00 	comiss xmm0,DWORD PTR [eax+0x150]
1008ab77:	72 29                	jb     0x1008aba2
1008ab79:	80 be 88 00 00 00 01 	cmp    BYTE PTR [esi+0x88],0x1
1008ab80:	75 20                	jne    0x1008aba2
1008ab82:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x0
1008ab89:	00 00 00 
1008ab8c:	8b 06                	mov    eax,DWORD PTR [esi]
1008ab8e:	51                   	push   ecx
1008ab8f:	8b ce                	mov    ecx,esi
1008ab91:	c7 04 24 cd cc 4c 3e 	mov    DWORD PTR [esp],0x3e4ccccd
1008ab98:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008ab9b:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
1008aba2:	5e                   	pop    esi
1008aba3:	c3                   	ret
