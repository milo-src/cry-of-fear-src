
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

10071b20 <.text+0x70b20>:
10071b20:	55                   	push   ebp
10071b21:	8b ec                	mov    ebp,esp
10071b23:	83 ec 10             	sub    esp,0x10
10071b26:	8d 45 f0             	lea    eax,[ebp-0x10]
10071b29:	50                   	push   eax
10071b2a:	ff 15 90 26 1b 10    	call   DWORD PTR ds:0x101b2690
10071b30:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10071b33:	ff 75 14             	push   DWORD PTR [ebp+0x14]
10071b36:	e8 15 ed 00 00       	call   0x10080850
10071b3b:	83 c4 0c             	add    esp,0xc
10071b3e:	e8 6d ed 00 00       	call   0x100808b0
10071b43:	80 3d 7c d2 18 10 00 	cmp    BYTE PTR ds:0x1018d27c,0x0
10071b4a:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10071b4f:	66 0f 6e c8          	movd   xmm1,eax
10071b53:	0f 5b c9             	cvtdq2ps xmm1,xmm1
10071b56:	f3 0f 5c c1          	subss  xmm0,xmm1
10071b5a:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
10071b5f:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10071b64:	75 12                	jne    0x10071b78
10071b66:	8d 45 f0             	lea    eax,[ebp-0x10]
10071b69:	50                   	push   eax
10071b6a:	ff 15 94 26 1b 10    	call   DWORD PTR ds:0x101b2694
10071b70:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
10071b75:	83 c4 04             	add    esp,0x4
10071b78:	83 3d b8 2b 54 10 00 	cmp    DWORD PTR ds:0x10542bb8,0x0
10071b7f:	b8 01 00 00 00       	mov    eax,0x1
10071b84:	74 14                	je     0x10071b9a
10071b86:	f3 0f 10 05 fc 94 55 	movss  xmm0,DWORD PTR ds:0x105594fc
10071b8d:	10 
10071b8e:	f3 0f 5c c1          	subss  xmm0,xmm1
10071b92:	f3 0f 11 05 fc 94 55 	movss  DWORD PTR ds:0x105594fc,xmm0
10071b99:	10 
10071b9a:	8b e5                	mov    esp,ebp
10071b9c:	5d                   	pop    ebp
10071b9d:	c3                   	ret
