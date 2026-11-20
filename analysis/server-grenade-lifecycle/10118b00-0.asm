
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10118b00 <.text+0x117b00>:
10118b00:	53                   	push   ebx
10118b01:	8b dc                	mov    ebx,esp
10118b03:	83 ec 08             	sub    esp,0x8
10118b06:	83 e4 f0             	and    esp,0xfffffff0
10118b09:	83 c4 04             	add    esp,0x4
10118b0c:	55                   	push   ebp
10118b0d:	8b 6b 04             	mov    ebp,DWORD PTR [ebx+0x4]
10118b10:	89 6c 24 04          	mov    DWORD PTR [esp+0x4],ebp
10118b14:	8b ec                	mov    ebp,esp
10118b16:	81 ec 88 00 00 00    	sub    esp,0x88
10118b1c:	56                   	push   esi
10118b1d:	57                   	push   edi
10118b1e:	8b 3d 88 31 22 10    	mov    edi,DWORD PTR ds:0x10223188
10118b24:	f3 0f 2c 47 4c       	cvttss2si eax,DWORD PTR [edi+0x4c]
10118b29:	f3 0f 7e 47 58       	movq   xmm0,QWORD PTR [edi+0x58]
10118b2e:	f3 0f 2c 77 50       	cvttss2si esi,DWORD PTR [edi+0x50]
10118b33:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10118b36:	8b 47 74             	mov    eax,DWORD PTR [edi+0x74]
10118b39:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10118b3c:	8b 47 60             	mov    eax,DWORD PTR [edi+0x60]
10118b3f:	89 45 94             	mov    DWORD PTR [ebp-0x6c],eax
10118b42:	8b 47 6c             	mov    eax,DWORD PTR [edi+0x6c]
10118b45:	89 45 a4             	mov    DWORD PTR [ebp-0x5c],eax
10118b48:	f3 0f 2c 4f 7c       	cvttss2si ecx,DWORD PTR [edi+0x7c]
10118b4d:	8b 87 80 00 00 00    	mov    eax,DWORD PTR [edi+0x80]
10118b53:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
10118b56:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
10118b59:	89 75 b4             	mov    DWORD PTR [ebp-0x4c],esi
10118b5c:	f3 0f 2c 57 78       	cvttss2si edx,DWORD PTR [edi+0x78]
10118b61:	89 4d bc             	mov    DWORD PTR [ebp-0x44],ecx
10118b64:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
10118b67:	89 4d e0             	mov    DWORD PTR [ebp-0x20],ecx
10118b6a:	f3 0f 10 4f 54       	movss  xmm1,DWORD PTR [edi+0x54]
10118b6f:	f3 0f 10 57 70       	movss  xmm2,DWORD PTR [edi+0x70]
10118b74:	66 0f d6 45 8c       	movq   QWORD PTR [ebp-0x74],xmm0
10118b79:	f3 0f 7e 47 64       	movq   xmm0,QWORD PTR [edi+0x64]
10118b7e:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
10118b81:	66 0f d6 45 9c       	movq   QWORD PTR [ebp-0x64],xmm0
10118b86:	f3 0f 10 45 8c       	movss  xmm0,DWORD PTR [ebp-0x74]
10118b8b:	f3 0f 11 45 c4       	movss  DWORD PTR [ebp-0x3c],xmm0
10118b90:	f3 0f 10 45 90       	movss  xmm0,DWORD PTR [ebp-0x70]
10118b95:	f3 0f 11 45 c8       	movss  DWORD PTR [ebp-0x38],xmm0
10118b9a:	f3 0f 10 45 94       	movss  xmm0,DWORD PTR [ebp-0x6c]
10118b9f:	f3 0f 11 45 cc       	movss  DWORD PTR [ebp-0x34],xmm0
10118ba4:	f3 0f 10 45 9c       	movss  xmm0,DWORD PTR [ebp-0x64]
10118ba9:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
10118bae:	f3 0f 10 45 a0       	movss  xmm0,DWORD PTR [ebp-0x60]
10118bb3:	f3 0f 11 45 d8       	movss  DWORD PTR [ebp-0x28],xmm0
10118bb8:	f3 0f 10 45 a4       	movss  xmm0,DWORD PTR [ebp-0x5c]
10118bbd:	f3 0f 11 45 dc       	movss  DWORD PTR [ebp-0x24],xmm0
10118bc2:	89 7d b0             	mov    DWORD PTR [ebp-0x50],edi
10118bc5:	89 55 b8             	mov    DWORD PTR [ebp-0x48],edx
10118bc8:	0f 10 45 b0          	movups xmm0,XMMWORD PTR [ebp-0x50]
10118bcc:	5f                   	pop    edi
10118bcd:	f3 0f 11 4d c0       	movss  DWORD PTR [ebp-0x40],xmm1
10118bd2:	0f 11 00             	movups XMMWORD PTR [eax],xmm0
10118bd5:	5e                   	pop    esi
10118bd6:	0f 10 45 c0          	movups xmm0,XMMWORD PTR [ebp-0x40]
10118bda:	f3 0f 11 55 d0       	movss  DWORD PTR [ebp-0x30],xmm2
10118bdf:	0f 11 40 10          	movups XMMWORD PTR [eax+0x10],xmm0
10118be3:	0f 10 45 d0          	movups xmm0,XMMWORD PTR [ebp-0x30]
10118be7:	0f 11 40 20          	movups XMMWORD PTR [eax+0x20],xmm0
10118beb:	f3 0f 7e 45 e0       	movq   xmm0,QWORD PTR [ebp-0x20]
10118bf0:	66 0f d6 40 30       	movq   QWORD PTR [eax+0x30],xmm0
10118bf5:	8b e5                	mov    esp,ebp
10118bf7:	5d                   	pop    ebp
10118bf8:	8b e3                	mov    esp,ebx
10118bfa:	5b                   	pop    ebx
10118bfb:	c3                   	ret
