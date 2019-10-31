#pragma once

#include "d2gi_common.h"


class D2GIBlitter : public D2GIBase
{
	D3D9::IDirect3DVertexDeclaration9* m_pVDecl;
	D3D9::IDirect3DVertexBuffer9* m_pVB;
	D3D9::IDirect3DVertexShader9* m_pVS;
	D3D9::IDirect3DPixelShader9* m_pPS;
	D3D9::IDirect3DPixelShader9* m_pPSCK;
public:
	D2GIBlitter(D2GI*);
	~D2GIBlitter();

	VOID ReleaseResource();
	VOID LoadResource();

	VOID Blit(D3D9::IDirect3DSurface9*, RECT*, D3D9::IDirect3DTexture9*, RECT*);
	VOID BlitWithColorKey(D3D9::IDirect3DSurface9*, RECT*, D3D9::IDirect3DTexture9*, RECT*, DWORD);
};