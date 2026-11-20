
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10117b40 <.text+0x116b40>:
10117b40:	55                   	push   ebp
10117b41:	8b ec                	mov    ebp,esp
10117b43:	51                   	push   ecx
10117b44:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
10117b49:	8d 45 08             	lea    eax,[ebp+0x8]
10117b4c:	0f 28 c1             	movaps xmm0,xmm1
10117b4f:	83 ec 08             	sub    esp,0x8
10117b52:	f3 0f 58 05 84 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1384
10117b59:	10 
10117b5a:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
10117b60:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
10117b65:	50                   	push   eax
10117b66:	e8 c5 2e 00 00       	call   0x1011aa30
10117b6b:	f3 0f 10 0d d8 1e 1a 	movss  xmm1,DWORD PTR ds:0x101a1ed8
10117b72:	10 
10117b73:	83 c4 0c             	add    esp,0xc
10117b76:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
10117b79:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10117b7e:	f3 0f 5c 45 10       	subss  xmm0,DWORD PTR [ebp+0x10]
10117b83:	0f 2f c8             	comiss xmm1,xmm0
10117b86:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10117b8b:	76 5a                	jbe    0x10117be7
10117b8d:	f3 0f 10 4d 1c       	movss  xmm1,DWORD PTR [ebp+0x1c]
10117b92:	8d 45 14             	lea    eax,[ebp+0x14]
10117b95:	0f 28 c1             	movaps xmm0,xmm1
10117b98:	83 ec 08             	sub    esp,0x8
10117b9b:	f3 0f 58 05 84 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1384
10117ba2:	10 
10117ba3:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
10117ba9:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
10117bae:	50                   	push   eax
10117baf:	e8 7c 2e 00 00       	call   0x1011aa30
10117bb4:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
10117bb9:	83 c4 0c             	add    esp,0xc
10117bbc:	f3 0f 10 15 d8 1e 1a 	movss  xmm2,DWORD PTR ds:0x101a1ed8
10117bc3:	10 
10117bc4:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
10117bc7:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
10117bcc:	f3 0f 5c c8          	subss  xmm1,xmm0
10117bd0:	0f 2f d1             	comiss xmm2,xmm1
10117bd3:	0f 87 d1 00 00 00    	ja     0x10117caa
10117bd9:	f3 0f 58 c1          	addss  xmm0,xmm1
10117bdd:	f3 0f 5c 45 10       	subss  xmm0,DWORD PTR [ebp+0x10]
10117be2:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10117be7:	6a 00                	push   0x0
10117be9:	6a 00                	push   0x0
10117beb:	6a 17                	push   0x17
10117bed:	6a 00                	push   0x0
10117bef:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10117bf5:	6a 72                	push   0x72
10117bf7:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10117bfd:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
10117c02:	83 c4 10             	add    esp,0x10
10117c05:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117c0a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117c10:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
10117c15:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117c1a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117c20:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10117c25:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117c2a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117c30:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10117c35:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117c3a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117c40:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
10117c45:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117c4a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117c50:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
10117c55:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117c5a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117c60:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10117c65:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10117c6a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117c70:	0f bf 05 1c 1f 23 10 	movsx  eax,WORD PTR ds:0x10231f1c
10117c77:	50                   	push   eax
10117c78:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10117c7e:	b9 ff 00 00 00       	mov    ecx,0xff
10117c83:	39 4d 20             	cmp    DWORD PTR [ebp+0x20],ecx
10117c86:	0f 4e 4d 20          	cmovle ecx,DWORD PTR [ebp+0x20]
10117c8a:	51                   	push   ecx
10117c8b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10117c91:	83 c4 08             	add    esp,0x8
10117c94:	c7 04 24 00 00 00 41 	mov    DWORD PTR [esp],0x41000000
10117c9b:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10117ca1:	83 c4 04             	add    esp,0x4
10117ca4:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10117caa:	8b e5                	mov    esp,ebp
10117cac:	5d                   	pop    ebp
10117cad:	c3                   	ret
