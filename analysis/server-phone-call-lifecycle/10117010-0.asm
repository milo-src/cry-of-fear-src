
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10117010 <.text+0x116010>:
10117010:	55                   	push   ebp
10117011:	8b ec                	mov    ebp,esp
10117013:	83 ec 0c             	sub    esp,0xc
10117016:	56                   	push   esi
10117017:	57                   	push   edi
10117018:	8b f9                	mov    edi,ecx
1011701a:	e8 41 01 00 00       	call   0x10117160
1011701f:	8b cf                	mov    ecx,edi
10117021:	e8 3a 01 00 00       	call   0x10117160
10117026:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10117029:	8b cf                	mov    ecx,edi
1011702b:	0f b7 f0             	movzx  esi,ax
1011702e:	e8 ed 01 00 00       	call   0x10117220
10117033:	8b cf                	mov    ecx,edi
10117035:	66 3b f0             	cmp    si,ax
10117038:	74 11                	je     0x1011704b
1011703a:	6a 04                	push   0x4
1011703c:	e8 9f f2 ff ff       	call   0x101162e0
10117041:	5f                   	pop    edi
10117042:	33 c0                	xor    eax,eax
10117044:	5e                   	pop    esi
10117045:	8b e5                	mov    esp,ebp
10117047:	5d                   	pop    ebp
10117048:	c2 10 00             	ret    0x10
1011704b:	53                   	push   ebx
1011704c:	e8 af 00 00 00       	call   0x10117100
10117051:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
10117054:	33 f6                	xor    esi,esi
10117056:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10117059:	c7 45 08 00 00 00 00 	mov    DWORD PTR [ebp+0x8],0x0
10117060:	39 75 14             	cmp    DWORD PTR [ebp+0x14],esi
10117063:	7e 42                	jle    0x101170a7
10117065:	33 c0                	xor    eax,eax
10117067:	83 7f 04 00          	cmp    DWORD PTR [edi+0x4],0x0
1011706b:	74 0b                	je     0x10117078
1011706d:	8b c8                	mov    ecx,eax
1011706f:	03 c9                	add    ecx,ecx
10117071:	f6 44 cb 0e 01       	test   BYTE PTR [ebx+ecx*8+0xe],0x1
10117076:	75 26                	jne    0x1011709e
10117078:	03 c0                	add    eax,eax
1011707a:	0f bf 4c c3 0c       	movsx  ecx,WORD PTR [ebx+eax*8+0xc]
1011707f:	8d 14 c3             	lea    edx,[ebx+eax*8]
10117082:	8b 02                	mov    eax,DWORD PTR [edx]
10117084:	0f af 0c 85 40 b1 21 	imul   ecx,DWORD PTR [eax*4+0x1021b140]
1011708b:	10 
1011708c:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
1011708f:	03 45 0c             	add    eax,DWORD PTR [ebp+0xc]
10117092:	51                   	push   ecx
10117093:	6a 00                	push   0x0
10117095:	50                   	push   eax
10117096:	e8 f5 83 02 00       	call   0x1013f490
1011709b:	83 c4 0c             	add    esp,0xc
1011709e:	46                   	inc    esi
1011709f:	0f b7 c6             	movzx  eax,si
101170a2:	3b 45 14             	cmp    eax,DWORD PTR [ebp+0x14]
101170a5:	7c c0                	jl     0x10117067
101170a7:	33 f6                	xor    esi,esi
101170a9:	39 75 fc             	cmp    DWORD PTR [ebp-0x4],esi
101170ac:	7e 3f                	jle    0x101170ed
101170ae:	66 90                	xchg   ax,ax
101170b0:	8d 45 f4             	lea    eax,[ebp-0xc]
101170b3:	8b cf                	mov    ecx,edi
101170b5:	50                   	push   eax
101170b6:	e8 e5 f1 ff ff       	call   0x101162a0
101170bb:	8b 07                	mov    eax,DWORD PTR [edi]
101170bd:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
101170c0:	0f b7 4d f6          	movzx  ecx,WORD PTR [ebp-0xa]
101170c4:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
101170c7:	ff 34 88             	push   DWORD PTR [eax+ecx*4]
101170ca:	0f b7 45 f4          	movzx  eax,WORD PTR [ebp-0xc]
101170ce:	8b cf                	mov    ecx,edi
101170d0:	50                   	push   eax
101170d1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
101170d4:	ff 75 14             	push   DWORD PTR [ebp+0x14]
101170d7:	53                   	push   ebx
101170d8:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
101170db:	e8 70 fb ff ff       	call   0x10116c50
101170e0:	46                   	inc    esi
101170e1:	40                   	inc    eax
101170e2:	0f b7 ce             	movzx  ecx,si
101170e5:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
101170e8:	3b 4d fc             	cmp    ecx,DWORD PTR [ebp-0x4]
101170eb:	7c c3                	jl     0x101170b0
101170ed:	5b                   	pop    ebx
101170ee:	5f                   	pop    edi
101170ef:	b8 01 00 00 00       	mov    eax,0x1
101170f4:	5e                   	pop    esi
101170f5:	8b e5                	mov    esp,ebp
101170f7:	5d                   	pop    ebp
101170f8:	c2 10 00             	ret    0x10
